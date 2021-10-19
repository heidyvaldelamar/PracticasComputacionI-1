/*
* ph-finder.cpp
*
*
* Copyright (c) 2008, Kayle C
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*     * Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*     * Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*
* THIS SOFTWARE IS PROVIDED BY KAYLE ''AS IS'' AND ANY
* EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL KAYLE BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

const int DECIMALS=3;		//controls the accuracy of the numbers, how many decimal points?

void manualPH();
void autoPH();
double checkIncrement(int n);
void pHOut(double pHGuess, double a, double b, double c, double d, bool correct);
void getCoefficients(double& a, double& b, double& c, double& d);

int main (int argc, char * const argv[]) 
{
	char mode;
	
	while(1)
	{
		cout << "Welcome to ph-finder\nEnter m for manual mode, or a for auto mode\n";
		cin >> mode;
		
		if(mode == 'm')
		{
			cout << "Entering manual mode...\n";								//Program controller, choose auto or manual
			manualPH();
			break;
		}
		else if (mode == 'a')
		{
			cout << "Entering auto mode...\n";
			autoPH();
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');										//clear in case of error
			cout << "Error. ";
			continue;
		}
	}
	
	return 0;
}

void manualPH()								//manual mode is where you have to enter a pH, and it will give you the equation/H+ result
{
	double a, b, c, d, pHGuess;
	
	getCoefficients(a,b,c,d);				//call to get numeral coeficients
	
	cout << "\nIn manual mode, you will need to enter a pH guess, and the program will output that\n"
	<< "along with the coresponding [H+] value and the equation (LHS) value\n"
	<< "to " << DECIMALS << " decimal points\n\n";
	
	while(1)
	{
		cout << "Enter a pH value between 0 and 14, or -10 to quit." << endl;		//keep asking for number until user wants to exit
		
		cin >> pHGuess;
		
		if(pHGuess == -10)
		{	
			cout << "Now Quitting..." << endl;										//check for -10 to exit
			break;
		}
		
		
		pHOut(pHGuess,a,b,c,d,false);												//using pH guess, call to computer and output results
	}
	
	return;
}

void autoPH()					//auto mode will attempt to do all the work for you and give you the result from just the coeficients
{
	double a, b, c, d, pHGuess = -1, hPlus=1, lhs=1, increment;
	bool found=false;
	int n=0;			//this controls the increment, leave at zero to start at +1 increments
	
	getCoefficients(a,b,c,d);
	
	cout << "\nThis program will attempt to determine the pH at which the equation \nis closest to 0 using 3 decimal points of accuracy.\n"
	<< "It will output only the final pH answer and the ones +- " << checkIncrement(DECIMALS) 
	<<" pH unit,\nalong with the corsponding [H+] and the equation value.\n\n";
	
	while(!found)							//the actual auto loop to find the pH
	{
		increment = checkIncrement(n);		//get whatever increment we're on
		
		while (lhs > 0 && pHGuess < 15)		//this loop goes up by increments until equation is negative, meaning you've found another decimal place
		{
			pHGuess += increment;				//add increment, first one is -1+1 = 0
			
			hPlus = pow(10, -pHGuess);			//computer coresponding H+ value
			lhs = a*pow(hPlus,3) + b*pow(hPlus,2) + c*hPlus + d;		//check if the equation is still positive or negative
			
		}
		
		if(lhs < 0 && n==DECIMALS)			//if we've gone through decimal places and the equation is negative
			found = true;					//exit the loop
		else if (lhs > 0)	//if we've gone through everything and the equation is still positive, there's a problem
		{
			cerr << "There seems to have been a problem in finding the right pH.\n"
			<<"Most likely the equation never went negative,\nso there is no solution within normal pH range (0-14).\n"
			<<"Now exiting...\n";
			exit(1);
		}
		
		lhs = 1;							//reset the LHS to a positive number so the loop re-enters
		pHGuess -= increment;				//set the pH back -increment so that we're in positive again
		n++;								//increase n, check next decimal place
	}
	
	cout << setw(4) << "pH" << setw(13) << "[H+]" << setw(15) << "LHS\n";		//output header
	pHOut(pHGuess-increment,a,b,c,d,false);										//output -increment pH guess
	pHOut(pHGuess,a,b,c,d,true);												//output the answer
	pHOut(pHGuess+increment,a,b,c,d,false);										//output +increment, for comparison sake
	
	return;
	
}

double checkIncrement(int n)
{

	return pow(10.0,-n);					//increment is simply 10e-n, starting with 1, 0.1, ect. Controlled by DECIMAL
	
}

void pHOut(double pHGuess, double a, double b, double c, double d, bool correct)	//generic output function (auto/manual)
{	
	double hPlus = pow(10, -pHGuess);												//calculation H+ from pH
	double lhs = a*pow(hPlus,3) + b*pow(hPlus,2) + c*hPlus + d;						//calculation equation value from H+
	
	cout << setprecision(DECIMALS) << fixed << setw(5) << right << pHGuess << setw(15) << scientific <<  hPlus << setw(15) << lhs;
	if(correct)
		cout << " <-- answer";					//output in a table like, also output "answer" for answer in auto mode
	cout << endl;
	
	return;
}

void getCoefficients(double& a, double& b, double& c, double& d)		//function to get coeficients from user
{
	while(1)
	{
		char checkRight;
		
		cout << "\nEnter values for ax^3 + bx^2 + cx + d = 0" << endl
		<< "Where x is your H+ ion" << endl;
		cout << "Enter a value for a: " << endl;
		cin >> a;
		
		cout << "Enter a value for b: " << endl;
		cin >> b;
		
		cout << "Enter a value for c: " << endl;
		cin >> c;
		
		cout << "Enter a value for d: " << endl;
		cin >> d;
		
		cout << "Is your equation is " << a << "x^3 + " << b << "x^2 + " << c << "x + " << d << "? (y/n)\n";
		cin >> checkRight;
		if(checkRight == 'y' || checkRight =='Y')				//propt to make sure equation is correct, redo otherwise
			break;
	}
	return;
}
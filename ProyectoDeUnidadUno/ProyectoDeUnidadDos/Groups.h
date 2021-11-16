// Heidy Valdelamar & Sofía Palacios Cuevas

// CLASE 'Groups'
# pragma
# include <string>

class Groups{
    private:
        string name; // nombre del grupo
        float pkr; // potencial de los radicales
        int charge; // carga del radical
    public:
        Groups(string, float, int); // constructor con parámetros
        Groups(); // constructor

        int CreateGroup(); // creamos nuevo 'grupo'
        void AskPh(); // pedimos pH
        int CalculateCharge(); // Calcular carga a cierto pH
        int GetCarga(); // recuperar la carga
        float GetPkr(); // recuperar pk de radicales
        float GetResult();


};

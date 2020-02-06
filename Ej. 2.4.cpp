#include <iostream>
using namespace std;

class Gato{
    public:
    int suEdad;
    int suPeso;
    void Maullar(){
        cout << "miauuuu" << endl;
    }
};

int main(void){
    Gato Negro;
    Negro.suEdad=7;
    Negro.suPeso=5;
    cout << "El peso de Negro es: " << Negro.suEdad << endl;
    cout << "La edad de Negro es: " << Negro.suPeso << endl<<endl;
    Negro.Maullar();
}

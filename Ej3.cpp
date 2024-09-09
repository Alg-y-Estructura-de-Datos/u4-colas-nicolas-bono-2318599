#include <iostream>
using namespace std;
#include "Cola/Cola.h"
void eliminar_ocurrencias(Cola<int>&cola,int n);
int main() {
    Cola<int> cola;
    int numero;

    cout << "Ingrese numeros para la cola (ingrese -1 para terminar): " << endl;
    int input;
    while (cin >> input && input != -1) {
        cola.encolar(input);
    }

    cout << "Ingrese el numero a eliminar: ";
    cin >> numero;
    eliminar_ocurrencias(cola,numero);
}

void eliminar_ocurrencias(Cola<int>&cola,int n){
    bool encontrado= false;
    Cola<int>colaaux;
    int aux;
    while (!cola.esVacia()){
        aux=cola.desencolar();
        if(aux==n){
            if(!encontrado){
                encontrado=true;
                colaaux.encolar(n);
            }
        } else{
            colaaux.encolar(aux);
        }
    }
    while (!colaaux.esVacia()){
        cout<<colaaux.desencolar()<<"\n";
    }
}

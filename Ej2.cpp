#include <iostream>
using namespace std;
#include "Cola/Cola.h"
void suprimir(Cola<int>,int n);
int main() {
    Cola<int> cola;
    int limite;

    cout << "Ingrese numeros para la cola (ingrese -1 para terminar): " << endl;
    int input;
    while (cin >> input && input != -1) {
        cola.encolar(input);
    }


    cout << "Ingrese el limite: ";
    cin >> limite;
    suprimir(cola,limite);
}
void suprimir(Cola<int>cola,int n){
Cola<int>colaaux;
int aux;
    while (!cola.esVacia()){
        aux=cola.desencolar();
        if (aux>n){
            colaaux.encolar(aux);
        }
    }
    while (!colaaux.esVacia()){
        cout<<colaaux.desencolar()<<"\n";
    }
}

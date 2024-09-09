#include <iostream>
using namespace std;
#include "Cola/Cola.h"
int sumar(Cola<int>&cola,int n);
int main(){
    Cola<int> cola;
    int numero;
    cout << "Ingrese numeros para la cola (ingrese -1 para terminar): " << endl;
    int input;
    while (cin >> input && input != -1) {
        cola.encolar(input);
    }

    cout << "Ingrese el numero : ";
    cin >> numero;
    cout<<"la suma es "<<sumar(cola,numero)<<"\n";
}

int sumar(Cola<int>&cola,int n){
    Cola<int>colaaux;
    int aux,suma=0;
    while (!cola.esVacia()){
        aux=cola.desencolar();
        if (aux==n&&!colaaux.esVacia()){
            while (!colaaux.esVacia()){
             suma+=colaaux.desencolar();
            }
            return suma;
        }else{
            colaaux.encolar(aux);
        }
    }
}
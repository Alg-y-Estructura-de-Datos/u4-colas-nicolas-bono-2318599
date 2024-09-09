#include <iostream>
using namespace std;
#include "Cola/Cola.h"
void son_iguales(Cola<char>&cola1,Cola<char>&cola2);
int main() {
    Cola<char> cola1;
    Cola<char> cola2;


    cout << "Ingrese caracteres para la primera cola (ingrese '.' para terminar): " << endl;
    char input;
    while (cin >> input && input != '.') {
        cola1.encolar(input);
    }

    cout << "Ingrese caracteres para la segunda cola (ingrese '.' para terminar): " << endl;
    while (cin >> input && input != '.') {
        cola2.encolar(input);
    }
    son_iguales(cola1,cola2);
}
void son_iguales(Cola<char>&cola1,Cola<char>&cola2){
    char aux1,aux2;
    while(!cola1.esVacia()&&!cola2.esVacia()){
        aux1=cola1.desencolar();
        aux2=cola2.desencolar();
        if(aux1!=aux2){
            cout<<"la cola no es igual \n";
            return;
        }
    }
    cout<<"la cola es igual\n";
}
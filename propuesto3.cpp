#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main() {
    int n;

    cout << "Ingrese la cantidad de personas: ";
    cin >> n;

    Persona personas[n];
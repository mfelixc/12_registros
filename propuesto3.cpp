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
    for (int i = 0; i < n; i++) {
        cin.ignore();

        cout << "\nPersona " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, personas[i].nombre);

        cout << "Dia de nacimiento: ";
        cin >> personas[i].dia;

        cout << "Mes de nacimiento: ";
        cin >> personas[i].mes;

        cout << "Anio de nacimiento: ";
        cin >> personas[i].anio;
    }
    int mes;

    do {
        cout << "\nIngrese un mes (1-12) o 0 para salir: ";
        cin >> mes;

        if (mes != 0) {
            bool encontrado = false;

            cout << "\nPersonas que cumplen años en el mes " << mes << ":\n";
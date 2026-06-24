#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombres;
    string DNI;
    int edad;
};

int main() {
    int n;
    cout << "Cantidad de personas: ";
    cin >> n;

    Persona personas[n];

    for (int i = 0; i < n; i++) {
        cin.ignore();
        cout << "\nPersona " << i + 1 << endl;

        cout << "Nombres: ";
        getline(cin, personas[i].nombres);

        cout << "DNI: ";
        getline(cin, personas[i].DNI);

        cout << "Edad: ";
        cin >> personas[i].edad;
    }

    int mayores50 = 0;
    int sumaEdades = 0;

    for (int i = 0; i < n; i++) {
        if (personas[i].edad > 50) {
            mayores50++;
        }
        sumaEdades += personas[i].edad;
    }

    double promedio = (double)sumaEdades / n;

    cout << "\nCantidad de personas mayores de 50 años: "
         << mayores50 << endl;

    cout << "Promedio de edades: "
         << promedio << endl;

    cout << "\nListado completo de personas registradas:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nPersona " << i + 1 << endl;
        cout << "Nombres: " << personas[i].nombres << endl;
        cout << "DNI: " << personas[i].DNI << endl;
        cout << "Edad: " << personas[i].edad << endl;
    }

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

struct Empleado {
    string nombres;
    char sexo;
    double sueldo;
};

int main() {
    int n;
    cout << "Cantidad de empleados: ";
    cin >> n;

    Empleado empleados[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEmpleado " << i + 1 << endl;
        cout << "Nombre: ";
        cin.ignore();
        getline(cin, empleados[i].nombres);

        cout << "Sexo (M/F): ";
        cin >> empleados[i].sexo;

        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;
    }

    int posMayor = 0, posMenor = 0;

    for (int i = 1; i < n; i++) {
        if (empleados[i].sueldo > empleados[posMayor].sueldo) {
            posMayor = i;
        }
        if (empleados[i].sueldo < empleados[posMenor].sueldo) {
            posMenor = i;
        }
    }

    cout << "\nEmpleado con mayor sueldo:\n";
    cout << "Nombre: " << empleados[posMayor].nombres << endl;
    cout << "Sexo: " << empleados[posMayor].sexo << endl;
    cout << "Sueldo: " << empleados[posMayor].sueldo << endl;

    cout << "\nEmpleado con menor sueldo:\n";
    cout << "Nombre: " << empleados[posMenor].nombres << endl;
    cout << "Sexo: " << empleados[posMenor].sexo << endl;
    cout << "Sueldo: " << empleados[posMenor].sueldo << endl;

    return 0;
}
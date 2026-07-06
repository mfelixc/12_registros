#include <iostream>
#include <string>
using namespace std;

struct ContactoEmail {
    string nombreCompleto;
    string sexo;
    int edad;
    string email;
};

int main () {
    ContactoEmail C[100];
    int n = 0;
    int opcion;

    do {
        cout << "\n----- MENU DE CONTACTOS -----" << endl;
        cout << "1. Agregar un contacto" << endl;
        cout << "2. Modificar un contacto" << endl;
        cout << "3. Mostrar un listado general de contactos" << endl;
        cout << "4. Mostrar un listado de contactos por servidor" << endl;
        cout << "5. Eliminar un contacto" << endl;
        cout << "6. Buscar contacto por email" << endl;
        cout << "0. Salir del programa" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
 if (opcion == 1) {
            if (n >= 100) {
                cout << "No se pueden agregar mas contactos, la agenda esta llena." << endl;
            }
            else {
                cin.ignore();
                cout << "Ingrese el nombre completo del contacto: ";
                getline(cin, C[n].nombreCompleto);
                cout << "Ingrese el sexo del contacto: ";
                getline(cin, C[n].sexo);
                cout << "Ingrese la edad del contacto: ";
                cin >> C[n].edad;
                cin.ignore();
                cout << "Ingrese el email del contacto: ";
                getline(cin, C[n].email);
                n++;
                cout << "Contacto agregado con exito." << endl;
            }
        }
    }while (opcion != 0);
    return 0;
}
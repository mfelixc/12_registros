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
        else if (opcion == 2) {
            if (n == 0) {
                cout << "No hay contactos registrados." << endl;
            } 
            else {
                string nombrebuscado;
                cin.ignore();
                cout << "Ingrese el nombre completo del contacto a modificar: ";
                getline(cin, nombrebuscado);
                int pos = -1;
                for (int i = 0; i < n; i++) {
                    if (C[i].nombreCompleto == nombrebuscado) {
                        pos = i;
                    }
                }
                if (pos == -1) {
                    cout << "No se encontro un contacto con ese nombre." << endl;
                } else {
                    cout << "Ingrese el nuevo nombre completo: ";
                    getline(cin, C[pos].nombreCompleto);
                    cout << "Ingrese el nuevo sexo: ";
                    getline(cin, C[pos].sexo);
                    cout << "Ingrese la nueva edad: ";
                    cin >> C[pos].edad;
                    cin.ignore();
                    cout << "Ingrese el nuevo email: ";
                    getline(cin, C[pos].email);
                    cout << "Contacto modificado con exito." << endl;
                }
            }
        }
        else if (opcion == 3) {
            if (n == 0) {
                cout << "No hay contactos registrados." << endl;
            } else {
                cout << "----- LISTADO GENERAL DE CONTACTOS -----" << endl;
                for (int i = 0; i < n; i++) {
                    cout << "Nombre: " << C[i].nombreCompleto << endl;
                    cout << "Sexo: " << C[i].sexo << endl;
                    cout << "Edad: " << C[i].edad << endl;
                    cout << "Email: " << C[i].email << endl;
                    cout << "-------------------------------" << endl;
                }
            }
        }
        else if (opcion == 4) {
            if (n == 0) {
                cout << "No hay contactos registrados." << endl;
            } else {
                string servidor;
                cin.ignore();
                cout << "Ingrese el servidor a buscar (ejemplo: gmail.com): ";
                getline(cin, servidor);
                bool encontrado = false;
                cout << "----- CONTACTOS DEL SERVIDOR " << servidor << " -----" << endl;
                for (int i = 0; i < n; i++) {
                    int largoEmail = C[i].email.size();
                    int largoServidor = servidor.size();
                    if (largoEmail >= largoServidor) {
                        string terminacion = C[i].email.substr(largoEmail - largoServidor, largoServidor);
                        if (terminacion == servidor) {
                            cout << "Nombre: " << C[i].nombreCompleto << endl;
                            cout << "Sexo: " << C[i].sexo << endl;
                            cout << "Edad: " << C[i].edad << endl;
                            cout << "Email: " << C[i].email << endl;
                            cout << "-------------------------------" << endl;
                            encontrado = true;
                        }
                    }
                }
                if (!encontrado) {
                    cout << "No se encontraron contactos de ese servidor." << endl;
                }
            }
        }
         else if (opcion == 5) {
            if (n == 0) {
                cout << "No hay contactos registrados." << endl;
            } else {
                string emailBuscado;
                cin.ignore();
                cout << "Ingrese el email del contacto a eliminar: ";
                getline(cin, emailBuscado);
                int pos = -1;
                for (int i = 0; i < n; i++) {
                    if (C[i].email == emailBuscado) {
                        pos = i;
                    }
                }
                if (pos == -1) {
                    cout << "No se encontro un contacto con ese email." << endl;
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        C[i] = C[i + 1];
                    }
                    n--;
                    cout << "Contacto eliminado con exito." << endl;
                }
            }

        }
    }while (opcion != 0);
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

struct Atleta {
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main() {
    int n;

    cout << "Ingrese la cantidad de atletas: ";
    cin >> n;

    Atleta atletas[n];
        for (int i = 0; i < n; i++) {
        cin.ignore();

        cout << "\nAtleta " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, atletas[i].nombre);

        cout << "Pais: ";
        getline(cin, atletas[i].pais);

        cout << "Disciplina: ";
        getline(cin, atletas[i].disciplina);

        cout << "Numero de medallas: ";
        cin >> atletas[i].medallas;
    }
      cin.ignore();

    string paisBuscar;

    cout << "\nIngrese el nombre del pais: ";
    getline(cin, paisBuscar);

    bool encontrado = false;
    int mayor = -1;
    int indiceMayor = -1;

    cout << "\nAtletas del pais " << paisBuscar << ":\n";
    for (int i = 0; i < n; i++) {
        if (atletas[i].pais == paisBuscar) {
            cout << "\nNombre: " << atletas[i].nombre << endl;
            cout << "Disciplina: " << atletas[i].disciplina << endl;
            cout << "Medallas: " << atletas[i].medallas << endl;

            encontrado = true;

            if (atletas[i].medallas > mayor) {
                mayor = atletas[i].medallas;
                indiceMayor = i;
            }
        }
    }
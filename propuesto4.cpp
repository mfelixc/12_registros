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
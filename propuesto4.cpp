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
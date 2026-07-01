#include <iostream>
using namespace std;

struct  empleados {
int numero;
string nombre;
int ventas[12];
float salario;
};

int main () {
    int n;
    cin >> n;
    empleados E[100];
    int mayor[100]; 
    for (int i = 0; i < n; i++) {
        mayor[i] = 0;
        cin >> E[i].numero;
        cin >> E[i].nombre; 
        for(int j = 0; j < 12; j++){
            cin >> E[i].ventas[j];
            mayor[i] = mayor[i] + E[i].ventas[j];
        }
        cin >> E[i].salario;  
    }

    int mayores, empleadomayor;
    mayores = mayor[0];
    empleadomayor = 0;
    for (int i = 1; i < n; i++) {
        if (mayores < mayor[i]) {
            mayores = mayor[i];
            empleadomayor = i;
        }
    }
    cout << E[empleadomayor].numero << endl;
    cout << E[empleadomayor].nombre << endl;

    for (int i = 0; i < n; i++) {
        if (mayor[i] > 100) {
            E[i].salario = E[i].salario * 1.1;
        }
    }

    for (int i = 0; i < n; i++) {
        bool menosDe30 = false;
        for (int j = 0; j < 12; j++) {
            if (E[i].ventas[j] < 30) {
                menosDe30 = true;
            }
        }
        if (menosDe30) {
            cout << E[i].numero << endl;
            cout << E[i].nombre << endl;
        }
    }
    return 0; 
}

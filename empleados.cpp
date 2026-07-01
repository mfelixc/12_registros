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
    for (int i = 0;i < n;i++){
        cin.ignore();
        cin >> E[i].numero;
        cin >> E[i].nombre;
        for(int j = 0;j < 12;j++){
        cin >> E[i].ventas[j];  
        }
        cin >> E[i].salario;  
    }
return 0;  
}


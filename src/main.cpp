#include <iostream>
using namespace std;

int main() {
    const int NOTA_MINIMA = 6;
    float nota1, nota2, promedio;

    cout << "Ingrese la nota del primer cuatrimestre: ";
    cin >> nota1;
    cout << "Ingrese la nota del segundo cuatrimestre: ";
    cin >> nota2;

    promedio = (nota1 + nota2) / 2;
    cout << "Promedio: " << promedio << endl;

    if (promedio >= NOTA_MINIMA) {
        cout << "APROBADO" << endl;
    }
    else {
        cout << "A INTENSIFICACION" << endl;
    }
    return 0;
}
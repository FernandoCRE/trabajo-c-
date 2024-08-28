#include <iostream>
using namespace std;

int main() {
    int num1; 
    int num2; 
    int num3; 
    int num4; 
    int num5;
    int mayor; 
    int menor;

    cout << "Ingresa cinco números enteros: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;


    mayor = num1;
    menor = num1;


    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }
    if (num5 > mayor) {
        mayor = num5;
    }


    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num4 < menor) {
        menor = num4;
    }
    if (num5 < menor) {
        menor = num5;
    }

    // Imprimir los resultados
    cout << "El número mayor es: " << mayor << endl;
    cout << "El número menor es " << menor << endl;

    return 0;
}

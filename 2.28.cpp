#include <iostream>
using namespace std;

int main() {
    int numero;
    int a1;
    int a2;
    int a3;
    int a4;

 
    cout << "Ingresa un número de cuatro dígitos: ";
    cin >> numero;

    
    a1 = numero % 10;
    numero= numero/ 10;
    a2 = numero % 10;
    numero =numero/ 10;
    a3 = numero % 10;
    numero =numero/ 10;
    a4 = numero % 10;

    // Imprimir los dígitos en orden inverso separados por dos espacios
    cout << a1 << "  " << a2 << "  " << a3 << "  " << a4 << endl;

    
}

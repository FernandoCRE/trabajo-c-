#include <iostream>
using namespace std;

int main() {
    int num1; 
    int num2;


    cout << "Ingresa el primer número entero: ";
    cin >> num1;
    cout << "Ingresa el segundo número entero: ";
    cin >> num2;

 
    if (num1 % 2 != 0) {
        cout << num1 << " es un numero impar." << endl;
    } else {
        cout << num1 << " no es un número impar." << endl;
    }


    if (num2 % 2 != 0) {
        cout << num2 << " es un numero impar." << endl;
    } else {
        cout << num2 << " no es un numero impar." << endl;
    }

  
    int suma = num1 + num2;


    if (suma % 2 != 0) {
        cout << "La suma de " << num1 << " y " << num2 << " es " << suma << " es impar." << endl;
    } else {
        cout << "La suma de " << num1 << " y " << num2 << " es " << suma << " es par." << endl;
    }

    return 0;
}

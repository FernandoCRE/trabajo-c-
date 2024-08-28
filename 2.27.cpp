#include <iostream>
using namespace std;

int main() {
    char letra;

    // Leer un carácter desde el teclado
    cout << "Ingresa un carácter: ";
    cin >> letra;

    // Imprimir el valor entero equivalente (código ASCII)
    cout << "El valor ASCII de " << letra << " es " << static_cast<int>(letra) << endl;

   
}

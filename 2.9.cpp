/*escriba una sola declaración o línea de C++ que cumpla cada uno de los siguientes*/


#include <iostream>
using namespace std;

int main(){

    cout<<"welcome to the maximal heart rate calculator.\n";

    int constante =208;
    float b=0.7;
    int edad;
    
    cout<<"ingresa tu edad: ";

    cin>>edad;
    float calculo= constante-(b*edad);

    cout<<"frecuencia maxima cardiaca es: "<<calculo;






}
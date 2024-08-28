#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    int c;

    cout<<"ingrese tres numeros: "; cin>>a>>b>>c;

    int suma= a+b+c;
    float prom= (a+b+c)/3.0;
    int mult= a*b*c;



    cout<<"la suma es "<<suma<<endl;
    cout<<"el promedio es "<<prom<<endl;
    cout<<"el producto es "<<mult<<endl;

     if (a<=b && a<=c)
        cout<<a<<" es menor"<<endl;
    
      else if (b<=a && b<=c)
        cout<<b<<" es menor"<<endl;
    
     else if (c<=a && c<=b)
        cout<<c<<" es menor"<<endl;
    

     if (a>=b && a>=c)
        cout<<a<<" es mayor"<<endl;
    
      else if (b>=a && b>=c)
        cout<<b<<" es mayor"<<endl;
    
     else if (c>=a && c>=b)
        cout<<c<<" es mayor"<<endl;

}
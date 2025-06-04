#include <iostream>
using namespace std;
float factorial (int n);

int main(){
    int n;
    float prod, suma=0;
    cout<<"Ingrese el valor de (n): ";
    cin>>n;

    for (int i=1;i<=n;i++){
    prod=factorial(i)/(2*i);
    suma=suma+prod;


    }

    cout<<"\nLa suma de la serie es: "<<suma;
return 0;
}

float factorial (int n){
int f=1;

for (int i=2;i<=n;i++){
    f=f*i;

}
return f;
}

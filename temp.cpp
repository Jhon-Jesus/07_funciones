#include <iostream>
using namespace std;
float factorial (float n);

int main(){
    int n;
    float prod, suma=0;
    cout<<"Ingrese n: ";
    cin>>n;

    prod=0.2+0.3;
    for (int i=1;i<=n;i++){
    prod=factorial(i)/(2*i);
    suma=suma+prod;


    }

    cout<<"\nLa suma es: "<<suma;
return 0;
}

float factorial (float n){
int f=1;

for (int i=2;i<=n;i++){
    f=f*i;

}
return f;
}

#include <iostream>
using namespace std;
int factorial(int n);

int main(){
int m,n, combi;
cout<<"Ingrese el valor de (m): ";
cin>>m;
cout<<"Ingrese el valor de (n): ";
cin>>n;

if (m>=n){
combi=factorial(m)/(factorial(n)*factorial(m-n));
cout<<"El valor de la combinatoria es: "<<combi;
}
else{
cout<<"Factorial de numero negativo "<<(m-n)<<"!"<<" no existe";
}

return 0;
}

int factorial(int n){
int f=1;
for (int i=2;i<=n;i++){
    f=f*i;
}
return f;
}

#include <iostream>
using namespace std;
int factorial(int n);
int combinatoria(int m, int n);

int main(){
int m,n, combi;
cout<<"Ingrese el valor de (m): ";
cin>>m;
cout<<"Ingrese el valor de (n): ";
cin>>n;

if (m>=n){

cout<<"El valor de la combinatoria es: "<<combinatoria(m,n);
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

int combinatoria(int m, int n){
int combi;
combi=factorial(m)/(factorial(n)*factorial(m-n));
return combi;

}

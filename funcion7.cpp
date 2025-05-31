#include <iostream>
using namespace std;
int factorial(int n);

int main(){
int m,n, combi;
cout<<"Ingrese (m):"<<endl;
cin>>m;
cout<<"Ingrese (n): "<<endl;
cin>>n;

combi=factorial(m)/(factorial(n)*factorial(m-n));

cout<<"Combinatoria es: "<<combi;

return 0;
}

int factorial(int n){
int f=1;
for (int i=2;i<=n;i++){
    f=f*i;
}
return f;
}

#include <iostream>
using namespace std;
 void fibonacci (int n);
 int suma (int n);

 int main(){
 int n;
    cout<<"Nª total de elementos de la serie de Fibonacci:"<<endl;
    cin>>n;
    fibonacci(n);

    cout<<"Suma total de los elementos de la serie: "<<suma(n)<<endl;

 return 0;
 }

 void fibonacci(int n){
 int fir=0, sec=1, nxt;
 for (int i=0;i<n;i++){
 if(i<=1){
 nxt=i;
 }
 else{
 nxt=fir+sec;
 fir=sec;
 sec=nxt;
 }
cout<<"La serie es: "<<nxt<<endl;

 }
 }

 int suma(int n){
 if(n==0) return 0;
 if(n==1) return 1;

 int fir=0, sec=1,nxt, suma=1;
 for (int i=2;i<n;i++){
 nxt=fir+sec;
 fir=sec;
 sec=nxt;
 suma=suma+nxt;
 }
 return suma;
 }



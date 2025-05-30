#include <iostream>
using namespace std;
 void fibonacci (int n);
 int suma (int n);

 int main(){
 int n;
    cout<<"nª total de elementos:"<<endl;
    cin>>n;
    fibonacci(n);

    cout<<"Suma: "<<suma(n)<<endl;

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
 int fir=0, sec=1,nxt, suma=1;
 for (int i=2;i<n;i++){
 nxt=fir+sec;
 fir=sec;
 sec=nxt;
 suma=suma+nxt;
 }
 return suma;
 }



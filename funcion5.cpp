#include <iostream>
using namespace std;
void amigos(int num1, int num2);
 int main(){
 int num1, num2;

 cout<<"Ingrese el primer numero: ";
 cin>>num1;
 cout<<"Ingrese el segundo numero: ";
 cin>>num2;

 amigos(num1,num2);
 return 0;

 }
 void amigos(int num1, int num2){
 int sumadv1=0,Verdad,i,sumadv2=0;
    for(i=1;i<num1;i++){
    if(num1%i==0){
    sumadv1=sumadv1+i;
    }
    }

    for(i=1;i<num2;i++){
    if(num2%i==0){
    sumadv2=sumadv2+i;
    }
    }

    if(sumadv1==num2&&sumadv2==num1){
    cout<<"\nLos numeros "<<num1<<" y "<<num2<<" SON AMIGOS";
    }
    else{
    cout<<"\nLos numeros "<<num1<<" y "<<num2<<" NO SON AMIGOS";
    }
 return ;
 }

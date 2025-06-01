#include <iostream>
using namespace std;
int mcm(int num1, int num2);
int mcd(int num1, int num2);

int main(){
int num1,num2;
cout<<"Ingrese el primer numero a evaluar: ";
cin>>num1;
cout<<"Ingrese el segundo numero a evaluar: ";
cin>>num2;
cout<<"El MCD es: "<<mcd(num1,num2)<<endl;;
cout<<"El MCM es: "<<mcm(num1,num2);
return 0;

}

int mcd(int num1, int num2){
int temp;
while (num2!=0){
temp=num2;
num2=num1%num2;
num1=num2;
}
return temp;
}

int mcm(int num1,int num2){
int mcm;
mcm=(num1*num2)/mcd(num1,num2);
return mcm;
}

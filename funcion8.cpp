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
if (num2!=0){
while (num2!=0){
temp=num2;
num2=num1%num2;
num1=temp;
}
return num1;
}
else{
return num1;
}

if (num1==0){
return num2;
}

else if (num1==0 && num2==0){
return 0;

}
}

int mcm(int num1,int num2){
int mcm;
if (num1!=0 && num2!=0){
mcm=(num1*num2)/mcd(num1,num2);
}
else{
return 0;
}
return mcm;
}

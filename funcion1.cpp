#include <iostream>
using namespace std;

void resta(int val1, int val2);
int producto(int val1, int val2);
int sumatot (int val1, int val2);
float division (float val1, float val2);
int main(){
    int num1,num2,resultado, sumat;
    float divi;
    cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"Ingrese el segundo numero: "; cin>>num2;

    resta(num1,num2);
    resta(num2,num1);

    resultado = producto(num1,num2);
    sumat=sumatot(num1,num2);
    division(num1,num2);

    cout<<"\nLa multiplicacion de "<<num1<<" por "<<num2<<" es: "<<resultado<<endl;
    cout<<"La suma de "<<num1<<" mas "<<num2<<" es: "<<sumat;
}

void resta(int val1, int val2){
    int sustrac;
    sustrac = val1-val2;
    cout<<"\nLa resta de "<<val1<<" - "<<val2<<" es: "<<sustrac;
}

int producto(int val1, int val2){
    int prod;
    prod = val1*val2;
    return(prod);
}

int sumatot (int val1, int val2){
    int suma;
    suma=val1+val2;
    return(suma);
}

float division (float val1, float val2){
    float div;
    if (val2==0){
    	cout<<"\nError, no se puede dividir empleando el 0 como divisor";
    	return 0;
	}

	div=val1/val2;
    cout<<"\nLa division entre: " <<val1<< " y " <<val2<< " es: " <<div;
    return(div);
	
}
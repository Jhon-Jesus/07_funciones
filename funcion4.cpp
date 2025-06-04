#include <iostream>
using namespace std;
void perfecto(int num);

int main(){
    int num;

    cout<<"Ingrese el numero: ";
    cin>>num;

    perfecto(num);
    return 0;
}

void perfecto(int num){
    int sum=0, f;

    for(int i=1;i<num;i++){
    if(num%i==0){
    sum=sum+i;

    }
    }

    if(num==sum){
    cout<<"El numero es perfecto";
    }
    else{
    cout<<"El numero no es perfecto";
    }
    return ;
}

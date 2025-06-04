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
    if(num==0){
    cout<<"\nEl numero 0 NO ES PERFECTO";
    }
    else if(num==sum){
    cout<<"\nEl numero "<<num<<" ES PERFECTO";
    }
    else{
    cout<<"\nEl numero "<<num<<" NO ES PERFECTO";
    }
    return ;
}

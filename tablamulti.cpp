#include<iostream>
using namespace std;
int main(void){
    int n, mult;
    cout<<"ingrese el numero de la tabla de multiplicar: ";
    cin>>n;
    for(int i=10; i>=1; i--){
        mult=n*i;
        cout<< n<<" x "<< i<< " = "<< mult<<"\n";

    }
return 0;
}
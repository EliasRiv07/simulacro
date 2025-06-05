#include<iostream>
using namespace std;
int main(void){
int n;
int acum=0;
cout<<"escriba el numero a  calcular: ";
cin>>n;
cout<<"0 1 ";
for(int i=0; i<=n; i++){

    
    acum=i+acum;
    cout<<acum<<" ";
}


return 0;
}
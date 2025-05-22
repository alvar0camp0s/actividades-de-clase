#include <iostream>

using namespace std;

int main(){

   int numeros[5];

    cout << "Ingrese 5 numeros: <<endl;"<<endl;
for (int i = 0; i<5; i++){
    cout<<"Numero"<<i+1 << ": ";
    cin>>numeros[i];
}

cout<<numeros<<endl;
return 0;
}
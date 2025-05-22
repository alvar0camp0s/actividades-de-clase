#include <iostream>

using namespace std;

int main(){

   int numeros[5],n;

   cout<<"Digite el numero de tamaño del arreglo: "<<endl;
   cin>>n;
   int numeros[n];


    cout << "Ingrese 5 numeros: <<endl;"<<endl;
for (int i = 0; i<5; i++){
    cout<<"Numero"<<i+1 << ": ";
    cin>>numeros[i];
}

cout<<numeros<<endl;
return 0;
}
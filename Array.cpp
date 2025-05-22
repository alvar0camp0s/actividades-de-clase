#include <iostream>

using namespace std;

int main(){

//Arrays 

int numeros[5]={1,2,3,4,5};

cout<< "Contenido del arreglo"<<endl;

for (int i = 0; i<5; i++){
    cout<<"Elemento en la posicion "<<i<<" : "<<numeros[i]<<endl;
}
    return 0;
}

/*int numeros[5]={1,2,3,4,5};

cout<< "Contenido del arreglo"<<endl;

for (int i = 4; i>=0; i--){
    cout<<"Elemento en la posicion "<<i<<" : "<<numeros[i]<<endl;
}
    return 0;
*/

/*int numeros[5];

cout<< "Contenido del arreglo"<<endl;

cout << "Ingrese 5 numeros: <<endl;"
for (int i = 0; i<5; i++){
    cout<<"Numero"<<i+1 << ": ";
    cin>>numeros[i]<<endl;
}

    return 0;
*/
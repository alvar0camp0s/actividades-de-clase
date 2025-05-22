#include <iostream>

using namespace std;

int main(){

    int N=0,a,suma;

    cout<<"Podrías ingresar un numero que sera tu limite"<<endl;
    cin>>N;

    for (int i = 1; i<=N; i++){
        suma+=i; //suma el valor de i a la variable suma
        cout<<N<<""<<endl;

    }

        cout<<"La suma de los primeros N es:"<<N<<endl;
    return 0;
}
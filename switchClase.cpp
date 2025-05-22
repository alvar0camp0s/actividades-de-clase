#include <iostream>

using namespace std;

int main(){
    int res, n; // declaracion de las variables residuo y numero
    cout << "hola, podrias ingresar un numero entero " << endl;
    cin >> n;

    res = n % 2; // residuo del numero entre 2
    switch (res)
    {
    case 1: // si el residuo es 1, el numero es impar
        cout << n << " es un numero impar\n ";
        break;

    case 0: // si el residuo es 0, el numero es par
        cout << n << " es un numero par\n ";
        break;
    
    default: // si el dato ingresado no es un numero entero no se determina ninguno de los dos casos anteriores
        cout << "datos incorrectos";
        break;
    }
    

return 0;
}
#include <iostream>

using namespace std;

int main()
{

    int nota = 0;
    char letra;

    cout << "Introduzca su nota" << endl;
    cin >> nota;

    if (nota >= 0 and nota <= 100)
    {

        if (nota >= 90 and nota <= 95)
        {

            letra = 'A';
        }
        else if (nota >= 89 and nota <= 85)
        {
            letra = 'B';
        }
        else if (nota >= 84 and nota <= 80)
        {
            letra = 'C';
        }
        else if (nota >= 79 and nota <= 70)
        {
            letra = 'D';
        }
        else if (nota >= 70 and nota == 69)
        {

            letra = 'F';
        }
    }
    else
    {
        cout << "Por favor ingrese un caracter válido" << endl;
    }

    switch (letra)
    {
    case 'A':
        cout << "Felicidades por tu logro." << endl;
        break;
    case 'B':
        cout << "Eres excelente." << endl;

        break;
    case 'C':
        cout << "Sigue asi." << endl;

        break;
    case 'D':
        cout << "No te rindas." << endl;

        break;
    case 'E':
        cout << "Puedes dar más." << endl;

        break;
    case 'F':

        cout << "Te ira mejor a la proxima." << endl;

        break;


    }

    return 0;
}
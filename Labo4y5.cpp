#include <iostream>

using namespace std;

int main()
{

    int option;
    float number1;
    float number2;
    float answer;

    cout << "------**wELCOME**------" << endl;
    cout << "What do you want to do?" << endl;
    cout << "1- Addition" << endl;
    cout << "2- Substraction?" << endl;
    cout << "3- Multiplication" << endl;
    cout << "4- Divided by" << endl;
    cin >> option;

    cout << "Insert the first number: " << endl;
    cin >> number1;
    cout << "Insert the second number: " << endl;
    cin >> number2;

    switch (option)
    {
    case 1:
        answer = number1 + number2;
        cout << "Your answer is: " << answer << endl;

        break;

    case 2:

        answer = number1 - number2;
        cout << "Your answer is: " << answer << endl;

        break;
    case 3:

        answer = number1 * number2;
        cout << "Your answer is: " << answer << endl;

        break;
    case 4:

        if (number2 == 0)
        {
            cout << "Sorry, you can't do this operation." << endl;
        }
        else
        {
            answer = number1 / number2;
            cout << "Your answer is: " << answer << endl;
        }
        break;

    default:
        cout << "Chose a correct option" << endl;
        break;
    }

    return 0;
}
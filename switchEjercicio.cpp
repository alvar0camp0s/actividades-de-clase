#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int numberOne,numberTwo;
    char option;
    int answer;

    cout<<"  **Welcome to this calculator**  "<<endl;
    cout<<"  +: Addition  "<<endl;
    cout<<"  -: Substraction  "<<endl;
    cout<<"  *: Multiplication  "<<endl;
    cout<<"  /: Divided by  "<<endl;
    cin>>option;

    cout<<"Number 1:  "<<endl;
    cin>>numberOne;

    cout<<"Number 2:  "<<endl;
    cin>>numberTwo;


    


    switch (option ) {
    case '+':

        cout << numberOne<<"+"<< numberTwo << "="<< endl;
        answer= numberOne+numberTwo;
        cout<<answer<<endl;


        break;
    case '-':
        cout << numberOne<<"-"<< numberTwo << "=" << numberOne-numberTwo << endl;
        answer= numberOne-numberTwo;
        cout<<answer<<endl;
        break;
    case 'x':
        cout << numberOne<<"x"<< numberTwo << "=" << numberOne*numberTwo << endl;
        answer= numberOne*numberTwo;
        cout<<answer<<endl;

        break;
    case '/':
       if (numberTwo!=0){
        cout << numberOne<<"/"<< numberTwo << "=" << numberOne/numberTwo << endl;
        answer= numberOne/numberTwo;
        cout<<answer<<endl;

       } else {

        cout<<"Error:Divition no available"<<endl;

       }
        break;
        default:
        cout << "You cannot do that" << endl;
        cout<<"Please choose an option between +,-,*,/"<<endl;

     break;
    

    }

if ( answer > 0){
    cout << "The answer is positive"<<endl;
} else if (answer < 0){
    cout << "The answer is negative"<<endl;
} else {
    cout << "El resultado es 0"<<endl;
}
}

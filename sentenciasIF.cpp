#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int number=0;
    int x=0;
    cout<<"Insert a number"<<endl;
    cin>>number;


    if (number>0){

            cout<<"You have a positive number"<<endl;

    } else {

        cout<<"The number "<<number<<"Is negative"<<endl;

    }


    x=pow(number,number);
    if (x%2==0){

        cout<<"The number "<<number<<"Is pair"<<endl;

    } else {

        cout<<"The number "<<number<<"Is unpair"<<endl;

    }
    
    

    return 0;

}
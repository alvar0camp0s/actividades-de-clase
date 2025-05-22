#include <iostream>

using namespace std;

int main()
{

    int option;
    int priceLaptop = 900;
    int priceSmartphone = 500;
    int priceHeadPhone = 100;
    int howMany;
    float totalPrice;
    float discount;

    cout << "What do you want buy today? (Write just numbers)" << endl;
    cout << "1- Laptop: 900 USD" << endl;
    cout << "2- Smartphone: 500 USD" << endl;
    cout << "3- Headphones: 100 USD" << endl;
    cin >> option;

    switch (option)
    {
    case 1:

        cout << "How many laptops do you want to buy? (Write just numbers?)" << endl;
        cin >> howMany;

        if (howMany >= 10)
        {
            totalPrice = (priceLaptop*howMany);
         
            discount = totalPrice*0.10;
            cout << "You need to pay: " << (totalPrice)-discount << endl;
        }
        else if (howMany >= 5)
        {
            totalPrice = (priceLaptop*howMany);
            discount = totalPrice*0.05;
            cout << "You need to pay: " << (totalPrice)-discount << endl;
        } else {
                        cout << "You need to pay: " << priceLaptop*howMany << endl;

        }
        break;
    case 2:

        cout << "How many smartphones do you want to buy? (Write just numbers?)" << endl;
        cin >> howMany;

        if (howMany >= 10)
        {
            totalPrice = (priceSmartphone*howMany);
 
            discount = totalPrice*0.10;
            cout << "You need to pay: " << (totalPrice)-discount << endl;
        }
        else if (howMany >= 5)
        {
            totalPrice = (priceSmartphone*howMany);
 
            discount = totalPrice*0.05;
            cout << "You need to pay: " << (totalPrice)-discount << endl;
        } else {
            cout << "You need to pay: " << priceSmartphone*howMany << endl;

        }
        break;
    case 3:

        cout << "How many headphones do you want to buy? (Write just numbers?)" << endl;
        cin >> howMany;

        if (howMany >= 10)
        {
            totalPrice = (priceHeadPhone*howMany);
 
            discount = totalPrice*0.10;
            cout << "You need to pay: " << (totalPrice)-discount << endl;
        }
        else if (howMany >= 5)
        {
            totalPrice = (priceHeadPhone*howMany);
 
            discount = totalPrice*0.05;
            cout << "You need to pay: " << totalPrice-discount << endl;
        } else {
                        cout << "You need to pay: " << priceHeadPhone*howMany << endl;

        }

        break;

    default:

        cout << "Sorry you need to write a correct caracter" << endl;
        break;
    }

    return 0;
}
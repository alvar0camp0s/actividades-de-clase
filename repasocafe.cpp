#include <iostream>

using namespace std;

int main()
{
    float priceFood = 0;
    int option;
    int howMany;
    float subTotal = 0;
    float discount = 0;
    float iva =0;
    cout << "---------------**WELCOME**------------" << endl;
    cout << "What do you want to order today?" << endl;
    cout << "1 Hamburguer" << endl;
    cout << "2 Pizza" << endl;
    cout << "3 Soda" << endl;
    cin >> option;

    /*Esta validacion evita el default en el switch*/
    if (option != 1 && option != 2 && option != 3)
    {

        cout << "Please insert a correct number" << endl;
    }
    else
    {

        cout << "How many items do want to order today?" << endl;
        cin >> howMany;

        switch (option)
        {
        case 1:
            priceFood = 5.50;
            break;
        case 2:
            priceFood = 3.75;
            break;
        case 3:
            priceFood = 1.25;
            break;
        }

        subTotal = priceFood * howMany;

        if (subTotal >= 20)
        {

            discount = subTotal * 0.15;
            iva=(subTotal-discount)*0.13;
            cout<<"SubTotal: "<<subTotal<<endl;
            cout<<"Discount: "<<discount<<endl;
            cout<<"IVA: "<<iva<<endl;
            cout<<"You total price is: "<<(subTotal-discount)+iva<<endl;

        } else {

            iva=subTotal*0.13;
            cout<<"SubTotal: "<<subTotal<<endl;
            cout<<"IVA: "<<iva<<endl;
            cout<<"You total price is: "<<subTotal+iva<<endl;

        }

    }
            return 0;

}
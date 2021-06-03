#ifndef __io__
#define __io__

#include <iostream>
using namespace std;

#endif

#include "pay.cpp"


//Strategy Pattern 
//Strategy pattern is used because we have multiple payment methods and client decides the actual implementation of payment method to be used at runtime.

//For our example, we will try to implement a simple Food ordering system where we have two payment strategies – using UPI or using DebitCard.
//First I created the interface for our strategy pattern in pay.cpp file.


class payment
{
public:
    static paymentMethod * makePayment(int type)
    {
        paymentMethod *payment_method = NULL;

            switch (type)
            {

                case 1:
                {
                    string u;
                    string p;
                    cout << "Enter UPI ID:"<<endl;
                    cin >> u;
                    cout << "Enter Password:"<<endl;
                    cin >> p;
                    payment_method = new UPIPayment(u, p);
                    break;
                }

                case 2:
                {
                    string cardnumber;
                    string cvv;
                    string pin;

                    cout<<"Enter card number:"<<endl;
                    cin>>cardnumber;
                    cout<<"Enter CVV:"<<endl;
                    cin>>cvv;
                    cout<<"Enter pin:"<<endl;
                    cin>>pin;
                    payment_method = new debitCard(cardnumber,cvv,pin);
                    break;
                }

            }
            payment_method->processPayment();
            cout<<endl;
            payment_method->paymentStatus();

            return payment_method;
    }
};

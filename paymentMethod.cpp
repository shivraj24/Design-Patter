#ifndef __io__
#define __io__

#include <iostream>
using namespace std;

#endif

#include "pay.cpp"

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
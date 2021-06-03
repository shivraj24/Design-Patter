#ifndef __io__
#define __io__

#include <iostream>
using namespace std;

#endif
// Interface of Strategy Pattern for PaymentMethods
//Here we have concrete implementation of algorithms for payment using UPI card or through Debitcard.

class paymentMethod
{

public:
    virtual void processPayment() = 0;
    virtual void paymentStatus() = 0;
};


//Implementaion of UPI Payment 
class UPIPayment : public paymentMethod
{
    string upiID;
    string password;
    string status ;
   
    public:
     
    UPIPayment(string upi, string pass) : upiID(upi), password(pass),status("NotSuccessful") {}

    //if upi and pass are valid
    void processPayment()
    {
        cout << "Payment in process"<<endl;
    }
  
    //info valid
        //status = "SuccessFul";
    
    //else
        // status = "Unsucessful";
    

    void paymentStatus()
    {
        cout << "Payment"<<status <<endl;
    }
};

//Implementation of debitCard payment
class debitCard : public paymentMethod{
    string cardnumber;
    string cvv;
    string pin;

    public:

    debitCard(string _number , string _cvv,string _pin): cardnumber(_number),cvv(_cvv),pin(_pin){}

    void processPayment()
    {
        cout<<"Payment in Process"<<endl;
    }

    //if credentials valid 
    string status = "Successful";
    //else 
    //string status = "unSuccessful";

    void paymentStatus()
    {
        cout<<"Payment "<<status<<endl;
    }

};

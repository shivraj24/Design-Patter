#ifndef __io__
#define __io__

#include <iostream>
using namespace std;

#endif

#include "paymentMethod.cpp"

class phone
{
protected:
    string company;
    string model;
    string iemi;

public:
    phone(string _company, string _model, string _iemi) : company(_company), model(_model), iemi(_iemi) {}
};

class Samsung : public phone
{

protected:
    int price;
    int camera;
    string simType;

public:
    Samsung(int _price, int _camera, string _simType, string _company, string _model, string _iemi) : phone(_company, _model, _iemi), price(_price), camera(_camera), simType(_simType) {}

    void Dial(string number)
    {
        cout << "Dialing a " << number << endl;
    }

    void Receive(string number)
    {
        cout << "Received call from " << number << endl;
    }

    void SendMessage(string number, string message)
    {
        cout << "Sent message to " << number;
    }

    void ReceiveMessage(string number, string message)
    {
        cout << "Received Message :" << message << endl;
        cout << "Number :" << number << endl;
    }

    int getPrice()
    {
        return this->price;
    }
    int getCamera()
    {
        return this->camera;
    }
    string getsimType()
    {
        return this->simType;
    }

    void PayForFood(int type)
    {

        paymentMethod *p_method = payment::makePayment(type);

        if (type)
        {
            delete p_method;
        }
    }
};

class MI : public phone
{

protected:
    int price;
    int camera;
    string simType;

public:
    MI(int _price, int _camera, string _simType, string _company, string _model, string _iemi) : phone(_company, _model, _iemi), price(_price), camera(_camera), simType(_simType) {}

    void Dial(string number)
    {
        cout << "Dialing a " << number << endl;
    }

    void Receive(string number)
    {
        cout << "Received call from " << number << endl;
    }

    void SendMessage(string number, string message)
    {
        cout << "Sent message to " << number;
    }

    void ReceiveMessage(string number, string message)
    {
        cout << "Received Message :" << message << endl;
        cout << "Number :" << number << endl;
    }

    int getPrice()
    {
        return this->price;
    }
    int getCamera()
    {
        return this->camera;
    }
    string getsimType()
    {
        return this->simType;
    }

    void PayForFood(int type)
    {

        paymentMethod *p_method = payment::makePayment(type);

        if (type)
        {
            delete p_method;
        }
    }
};

class Apple : public phone
{

protected:
    int price;
    int camera;
    string simType;

public:
    Apple(int _price, int _camera, string _simType, string _company, string _model, string _iemi) : phone(_company, _model, _iemi), price(_price), camera(_camera), simType(_simType) {}

    void Dial(string number)
    {
        cout << "Dialing a " << number << endl;
    }

    void Receive(string number)
    {
        cout << "Received call from " << number << endl;
    }

    void SendMessage(string number, string message)
    {
        cout << "Sent message to " << number;
    }

    void ReceiveMessage(string number, string message)
    {
        cout << "Received Message :" << message << endl;
        cout << "Number :" << number << endl;
    }

    int getPrice()
    {
        return this->price;
    }
    int getCamera()
    {
        return this->camera;
    }
    string getsimType()
    {
        return this->simType;
    }

    void PayForFood(int type)
    {

        paymentMethod *p_method = payment::makePayment(type);

        if(type)
        {
            delete p_method;
        }
    }
};
// Singleton Patter 
// Only Single instance of setting class is created for each Phone
//Private static instance to restrict instantiation of the class from other classes. class phoneSetting
{
    static phoneSetting *_instance;
    int brightness;
    bool wifi;      // 0 will represent OFF and 1 will be for ON
    bool bluetooth; // 0 will represent OFF and 1 will be for ON
    bool internet;  // 0 will represent OFF and 1 will be for ON

public:
    phoneSetting() : brightness(6), wifi(false), bluetooth(false), internet(false) {}
    static phoneSetting *getInstance()
    {
        if (_instance == NULL)
            _instance = new phoneSetting();

        return _instance;
    }

    void setBrightness(int level)
    {
        brightness = level;
    }
    void setWifi()
    {
        wifi = !wifi;
    }
    void setBluetooth()
    {
        bluetooth = !bluetooth;
    }
    void setInternet()
    {
        internet = !internet;
    }

    void show_settings()
    {
        cout << "Brightness" << brightness << endl;
        cout << "Wifi - " << boolalpha << wifi << endl;
        cout << "Internet - " << boolalpha << internet << endl;
        cout << "Bluetooth - " << boolalpha << bluetooth << endl;
    }
};

phoneSetting *phoneSetting ::_instance;

class SamsungJ7 : public Samsung, public phoneSetting
{

public:
    SamsungJ7() : Samsung(15000, 16, "Dual SIM", "Samsung", "SamsungJ7", "12387623") {}
    phoneSetting *setting = phoneSetting::getInstance();

};

class SamsungA5 : public Samsung, public phoneSetting
{

public:
    SamsungA5() : Samsung(22000, 22, "Dual SIM", "Samsung", "SamsungA5", "12987387") {}
    phoneSetting *setting = phoneSetting::getInstance();

    
};

class Iphone10 : public Apple, public phoneSetting
{

public:
    Iphone10() : Apple(70000, 48, "Single SIM", "Apple", "Iphone10", "42387623") {}
    phoneSetting *setting = phoneSetting::getInstance();
    
};

class Iphone12 : public Apple, public phoneSetting
{

public:
    Iphone12() : Apple(90000, 48, "Single SIM", "Apple", "Iphone12", "45687623") {}
    phoneSetting *setting = phoneSetting::getInstance();

    
    
};

class Redmi5 : public MI, public phoneSetting
{

public:
    Redmi5() : MI(9000, 16, "Dual SIM", "Xiomi", "Redmi5", "12387563") {}
    phoneSetting *setting = phoneSetting::getInstance();

    
};

class Redmi5pro : public MI, public phoneSetting
{

public:
    Redmi5pro() : MI(14000, 20, "Dual SIM", "Xiomi", "Redmi5pro", "67387563") {}
    phoneSetting *setting = phoneSetting::getInstance();

    
};

#ifndef __io__
#define __io__

#include<iostream>
using namespace std;

#endif

#include "Object.cpp"

int main()
{
    int type;

  
        
        SamsungJ7 *phon = new SamsungJ7();
        

        while(true)
        {
            cout<<"1. Dial \n 2. Send Message \n 3. Show settings \n 4. Change settings \n 5.Order Food "<<endl;
            int ch;
            cin>>ch;

            switch (ch)
            {
            case 1:
            {
                string num;
                cin>>num;
                phon->Dial(num);
                break;
            }
            case 2:
            {
                string num;
                string mess;
                cout<<"Enter number:"<<endl;
                cin>>num;
                cout<<"Enter message:"<<endl;
                cin>>mess;
                phon->SendMessage(num,mess);
                break;
            }
            case 3:
                phon->show_settings();
                break;
            case 4:
                cout<<"1. Change brightness \n 2. Set Wifi \n 3. Set Bluetooth \n 4. Set Internet";
                int choose;
                cin>>choose;
                switch(choose)
                {
                    case 1:
                        {
                            cout<<"Enter Brightness level";
                            int b;
                            cin>>b;
                            phon->setBrightness(b);
                            break;
                        }
                    case 2:
                        {
                            phon->setWifi();
                            break;
                        }
                    case 3:
                        {
                            phon->setBluetooth();
                            break;
                        }
                    case 4:
                        {
                            phon->setInternet();
                            break;
                        }
                }
                    break;
            case 5:
                {
                    phon->orderFood();
                    break;
                }
            
            default:
                break;
            }
        }

              
       
  

    cout<<"Exit...."<<endl;
    return 0;
}
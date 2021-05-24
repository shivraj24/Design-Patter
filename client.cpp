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
            cout<<"1. Dial \n 2. Send Message \n 3.";
            int ch;
            cin>>ch;

            switch (ch)
            {
            case 1:
                phon->Dial("9146564977");
                break;
            case 2:
                phon->SendMessage("9146564977","Hii");
            case 3:
                cout<<phon->getPrice()<<endl;
            
            default:
                break;
            }
        }

              
       
  

    cout<<"Exit...."<<endl;
    return 0;
}
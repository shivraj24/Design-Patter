#ifndef __io__
#define __io__

#include<iostream>
using namespace std;

#endif

#include "Object.cpp"


class CellPhone{

    public:

    static auto * buyPhone(int type)
    {
        phone *ph = NULL;

        switch (type)
        {
            case 1:{
                ph = new SamsungJ7();
                break;
            }

            case 2:{
                ph = new SamsungA5();
                break;
            }

            case 3:{
                ph = new Iphone10();
                break;
            }

            case 4:{
                ph = new Iphone12();
                break;
            }

            case 5:{
                ph = new Redmi5();
                break;
            }

            case 6:{
                ph = new Redmi5pro();
                break;
            }
            default:
                {
                    cout<<"Entered invalid option"<<endl;
                    break;
            }
        }
        return ph;
    }
};
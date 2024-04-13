#include<iostream>
#include<string>
using namespace std;

class flight
{
    private:
    int flight_number;
    string destination;
    float distance;
    float fule;

    void calfule()
    {
        if(distance<=1000)
        {
            fule=500;
        }
        else if(distance <=2000)
        {
            fule=1100;
        }
        else
        {
            fule=2200;
        }
    }



    public:
     void feedinfo()
     {
        cout<<"enter the flight number:-";
        cin>>flight_number;
        cout<<"enter the destination:-";
        cin>>destination;
        cout<<"enter the distance:-";
        cin>>distance;
        calfule();



     }

     void showinfo()
     {
        cout<<"flight number is:-"<<flight_number<<endl;
        cout<<"destination is:-"<<destination<<endl;
        cout<<"distance is:-"<<distance<<endl;
        cout<<"fule is:-"<<fule<<endl;

        

     }
};

int main()
{
    flight flight1;
    flight1.feedinfo();
    cout<<"********************"<<endl;
    flight1.showinfo();
    return 0;
}
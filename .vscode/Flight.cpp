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



    public:
     void feedinfo()
     {
        cout<<"enter the flight number:-";
        cin>>flight_number;

     }

     void showinfo()
     {
        cout<<"flight number is:-"<<flight_number<<endl;
        

     }
};

int main()
{
    flight flight1;
    flight1.feedinfo();
    flight1.showinfo();
    return 0;
}
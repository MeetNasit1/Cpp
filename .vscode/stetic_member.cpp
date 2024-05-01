#include<iostream>
using namespace std;

class employe
{
    int id;
   static int count;

    public:
    void getdata()
    {
        cout<<"enter the empploye id:-";
        cin>>id;
        count++;
    }
    void printdata()
    {
        cout<<"employe id is:-"<<id<<endl;
    }
     void  getcount()
    {
        cout<<"empploye count is:-"<<count<<endl;
    }
};
int employe :: count;
int main()
{
    employe Meet,RaJ,Ravi;
    Meet.getdata();
    Meet.printdata();
    Meet.getcount();

    RaJ.getdata();
    RaJ.printdata();
    RaJ.getcount();

    Ravi.getdata();
    Ravi.printdata();
    Ravi.getcount();

    return 0;
}
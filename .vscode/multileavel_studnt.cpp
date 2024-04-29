#include<iostream>
#include<string>
using namespace std;

class base
{
    int roll_number=1;
    public:
    string name="ravi";

    void printdata()
    {
        cout<<"student no is:-"<<roll_number<<endl;
    }
};

class base1: public base
{
    public:

    int eng=70;
    int guj=45;
    int stat=65;
     int total=0;

    void printdata1()
    {
        cout<<"english:-"<<eng<<endl;
        cout<<"gujrati:-"<<guj<<endl;
        cout<<"stat:-"<<stat<<endl;
         total=eng+guj+stat;
         cout<<"student total is:-"<<total<<endl;
    }
};
class drive:public base1
{
    void showdata()
    {
        void printdata();
        
        cout<<"****************"<<endl;
        
    }
};

int main()
{
    drive c;
    c.printdata();
    cout<<"student name:-"<<c.name<<endl;
    c.printdata1();
}
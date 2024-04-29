#include<iostream>
using namespace std;

class base
{
    public:
    int x;
    int y;

    void setnumber()
    {
        cout<<"enter the x value:-"<<endl;
        cin>>x;
        cout<<"enter the y value:-"<<endl;
        cin>>y;
    }
};
class derive : public base
{
    public:
    void sum()
    {
    cout<<"the sum is:-"<<x+y<<endl;
    }
};
class derive2 : public base
{
    public:
    void multi()
    {
        cout<<"multi is x and y:-"<<x*y<<endl;
    }
};

class derive3 : public base
{
    public:
    void devision()
    {
        cout<<"division is x and y:-"<<x/y<<endl;
    }
};
class derive4 :public base
{
    public:
    void hyphen()
    {
        cout<<"hyphen is x and y:-"<<x-y<<endl;
    }
};
int main()
{
    derive obj1;
    derive2 obj2;
    derive3 obj3;
    derive4 obj4;

    obj1.setnumber();
    obj1.sum();

    obj2.setnumber();
    obj2.multi();

    obj3.setnumber();
    obj3.devision();

    obj4.setnumber();
    obj4.hyphen();

    return 0;
}
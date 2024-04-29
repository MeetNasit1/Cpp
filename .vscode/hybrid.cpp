#include<iostream>
using namespace std;

class  base
{
    int a=10;
    int b=20;
    public:
    int c=30;

    void printdata()
    {
        cout<<a<<endl;
        cout<<b<<endl;

    }

};
class base2
{
    int a1=10;
    public:
    int x1=50;
    void showdata()
    {
        cout<<a1<<endl;
       
    }
};
class base3 : public base2
{
    public:
    int d1=60;
    int s1=0;
    void showdata1()
    {
        cout<<d1<<endl;
    }
};
class derive : public base
{
    public:
    int d=50;
};

class derive1 :public base3
{
    public:
    void showdata2()
    {
    cout<<s1<<endl;
    cout<<d1<<endl;
    
    }
};
int main()
{
    derive obj;
    derive1 obj1;

    cout<<obj.c<<endl;
    cout<<obj.d<<endl;

    obj.printdata();

    obj1.showdata();
    obj1.showdata1();
    obj1.showdata2();

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class base
{
    int no=1;

    public:
    string name="Meet";

    void printdata()
    {
        cout<<"employe no:-"<<no<<endl;
    }

};

class base1
{
    public:
    float salary=50000;

    void printdata1()
    {
        cout<<"employe salary:-"<<salary<<endl;
    }
};



class derive  :public base,public base1
{
   public:
   float bonus=10000;

   void showdata()
   {
    cout<<"employe bonus:-"<<bonus<<endl;
   }
};

int main()
{
    derive obj;
    obj.printdata();
    cout<<"employe name is:-"<<obj.name<<endl;
    obj.printdata1();
    obj.showdata();
}
#include<iostream>
#include<string>
using namespace std;

class base
{
    int student_no=1;
    public:
    string name="meet";


    void printdata()
    {
        cout<<"student no:-"<<student_no<<endl;
    }
};

class base1 :public base
{

    int english=50;
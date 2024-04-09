#include<iostream>
using namespace std;
class employe
{
    private:
    int id;
    int salary;
    public:
    int name;
    void addData()
    {
        cout<<"add id";
        cin>>id;
    }
    void show()
    {
        cout<<"employe id is :"<<id;
    }


};
int main()
{
    employe ravi,raj;
    ravi.name=10;
    ravi.addData();
    raj.addData();
    ravi.show();
    raj.show();

    return 0;
}
#include<iostream>
using namespace std;

class base
{
    public:
    int a=10;

    virtual void print()=0;
};
    class derive1 : public base
    {
        int b=20;
        void print()
        {
            cout<<"the value of a:-"<<a<<endl;
            cout<<"the value of b:-"<<b<<endl;

        }
    };


int main()
{
    base * base_obj_poi;
    derive1 derive_base;

    base_obj_poi=&derive_base;
    base_obj_poi->print();

    return 0;
}
#include<iostream>
using namespace std;

float square;
float a;

class complex 
{
    public:
    complex()
    {
        cout<<"enter the value of a:-";
        cin>>a;

        square=a*a;
        cout<<"square="<<square;
    }
};

int main()
{
    complex();
}
#include<iostream>
using namespace std;

float triagle; 
float b;
float h;
class complex 
{
    public:
    complex()
    {

    cout<<"enter the value of b:-";
    cin>>b;

    cout<<"enter the value of h:-";
    cin>>h;

    triagle=0.5*b*h;
    cout<<"triagle="<<triagle;
    }

};

int main()
{
   complex();
}
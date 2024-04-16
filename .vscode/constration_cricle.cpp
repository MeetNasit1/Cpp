#include<iostream>
using namespace std;
 
 float circle;
 float r;

 class complex 
 {
    public:
    complex()
    {
        cout<<"enter the value if r:-";
        cin>>r;

        circle=3.14*r*r;

        cout<<"circle="<<circle;


    }
 };

 int main()
 {
    complex();
 }
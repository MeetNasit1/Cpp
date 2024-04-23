#include<iostream>
using namespace std;

class complex
{
    int x;
    int y;

    public:
    void getdata(int a,int b);
    void printdata();
    void operator--();
};
void complex :: getdata(int a,int b)
{
   x=a;
   y=b;
}
void complex :: printdata()
{
    cout<<x<<endl;
    cout<<y<<endl;
}
void complex :: operator--()
{
    x=-x;
    y=-y;
}

int main()
{
    complex c;
    c.getdata(5,-10); 
    c.printdata();
    --c;
    c.printdata();
    
    return 0;
}

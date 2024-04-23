#include<iostream>
using namespace std;
class sample
{
    int x;
    int y;

    public:

    friend sample storedata (sample o1,sample o2);
    
        void getdata (int a,int b);
        void printdata();
    
};

void sample :: getdata(int a,int b)
{
    x=a;
    y=b;
}
void sample::printdata()
{
    cout<<x<<":"<<y<<endl;
}
sample   storedata(sample o1,sample o2)
{
    sample o3;
    o3.getdata((o1.x+o2.x),(o1.y+o2.y));

    return o3;
}
int main()
{
    sample c,c1,sum;

    c.getdata(10,5);
    c.printdata();

    c1.getdata(5,7);
    c1.printdata();

    sum=storedata(c,c1);
    sum.printdata();

    return 0;
}
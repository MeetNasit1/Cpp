#include<iostream>
using namespace std;

void square()
{
    int square;
   int  a=10;
     square=a*a; 
     cout<<"square:-"<<square<<endl; 
}

void cricle(int r)
{
    int cricle;
    cricle=3.14*r*r;
    cout<<"cricle:-"<<cricle<<endl;
}

void tringle(int b,int h)
{
    int tringle;
    tringle=0.5*b*h;
    cout<<"tringle:-"<<tringle<<endl;
}
void volumm(int l,int b,int h)
{
    int volumm;
    volumm=l*b*h;
    cout<<"volumm:-"<<volumm<<endl;
}
void cone(int r,float h,float a,float b)
{
    float cone;
    cone=a*b*(r*r)*h;
    cout<<"cone:-"<<cone<<endl;
}
void cylinder(float a,float r,float h)
{
    int cylinder;
    cylinder=a*(r*r)*h;
    cout<<"cylinder:-"<<cylinder<<endl;
}
void romebide(int b,int h)
{
    int romebide;
    romebide=b*h;
    cout<<"romebide:-"<<romebide<<endl;
}

int main()
{
    square();
    cricle(10);
    tringle(10,30);
    volumm(10,20,30);
    cone(0.3,3.14,14,15);
    cylinder(3.14,10,5);
    romebide(10,20);
} 
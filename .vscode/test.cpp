#include<iostream> 
#include<string> 
using namespace std; 
class test 
{ 
private: 
int testcod; 
string discripsen; 
int nocendines;  
int centereqd; 
 
int calcntr() 
{ 
    return(nocendines/100)+1;
} 
 
 
 
public: 
void schedule() 
{ 
    cout<<"enter the test code:-"; 
    cin>>testcod; 
    cout<<"enter the discripsen:-"; 
    cin>>discripsen; 
    cout<<"enter the nocedines:-"; 
    cin>>nocendines; 
    centereqd=calcntr(); 
} 
 
void disptest() 
{ 
    cout<<"test code is:-"<<testcod<<endl; 
    cout<<"discripesan is:-"<<discripsen<<endl; 
    cout<<"nocendines is:-"<<nocendines<<endl; 
    cout<<"centereq is:-"<<centereqd<<endl; 
} 
 
}; 
int main() 
{ 
    test c; 
    c.schedule(); 
    cout<<"***********************"<<endl; 
    c.disptest(); 
    return 0; 
}
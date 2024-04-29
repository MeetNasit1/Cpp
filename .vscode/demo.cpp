#include <iostream>
#include <string>
using namespace std;

class base 
{
private:
    int student_no = 1;

public:
    string name = "meet";

    void printdata()
    {
        cout << "student no:-" << student_no << endl;
    }
};

class base1 : public base 
{
private:
    int english = 50;
    int maths = 60;
 

public:
    void getdata() 
    {
        cout << "english:-" << english << endl;
        cout << "maths:-" << maths << endl;
       
    }
};

class derive : public base1 
{
public:
    void showdata() {
        int total1 = english + maths ;
        cout << "Total marks: " << total1 << endl;
    }
};

int main() 
{
    derive c;
    c.printdata();
    cout << "student name: " << c.name << endl;
    c.getdata();
    c.showdata();

    return 0;
}

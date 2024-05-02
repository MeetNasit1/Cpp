#include <iostream>
using namespace std;

class bank
{
    int actNo = 56578;
    int balance = 40000;
    string name = "Meet Nasit";

public:
    void getdata1()
    {
        int a;
        cout << "enter the diposite amount:-" << endl;
        cin >> a;
        balance += a;

        cout << "balance is:-" << balance << endl;
    }
    void getdata2()
    {
        int b;
        cout << "enter the Withdraw Amount:-" << endl;
        cin >> b;
        if (balance < b)
        {
            cout << "balance is not Available" << endl;
        }
        else
        {
            balance -= b;
            cout << "balance is:-" << balance << endl;
        }
    }
    void getdata3()
    {
        cout << "Name:-" << name << endl;
        cout << "Account no:-" << actNo << endl;
        cout << "balance is:-" << balance << endl;
    }
};

int main()
{
    char ch;
    int pin;
    bank obj;
    pin: 
    cout << "Enter the Account PIN - " << endl; 
    cin >> pin; 
    if (pin != 1234) 
    { 
        cout << "incorrect PIN !" << endl; 
        goto pin; 
    } 
    else 
    { 
    do
    {
        cout << "******************************************************************************" << endl;
        cout << "1.enter the diposite amount" << endl;
        cout << "2.enter the Withdraw amount" << endl;
        cout << "3.display information" << endl;
        cout << "4.exit" << endl;
        cout << "******************************************************************************" << endl;

        cout << "select the option:-" << endl;
        cin >> ch;

        switch (ch)
        {

        case '1':
            obj.getdata1();
            break;

        case '2':
            obj.getdata2();
            break;
        case '3':
            obj.getdata3();
            break;
        case '4':
            goto end;

            break;
        }
    } 
    while (ch != 4);
    end:
    cout << "Thank you" << endl;
    }
}
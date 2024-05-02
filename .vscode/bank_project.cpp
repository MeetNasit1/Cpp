#include<iostream>
using namespace std; 
 
class Account 
{ 
    int actNo = 56578; 
    int balance = 40000; 
    string name = "Meet Nasit"; 
    string address = "surat"; 
    char type = 'c'; 
 
public: 
    void deposit_Money(); 
    void display_account(); 
    void withdraw_money(); 
}; 
 
void Account ::deposit_Money() 
{ 
    int d; 
    cout << endl 
         << "Enter Amount you want to Deposit : "; 
    cin >> d; 
    balance += d; 
    cout << endl 
         << "Available Balance : " << balance << endl; 
}; 
 
void Account ::display_account() 
{ 
    cout << endl 
         << "Name - " << name; 
    cout << endl 
         << "Address - " << address; 
    cout << endl 
         << "Type - "; 
    if (type == 'c') 
    { 
        cout << "Current Account "; 
    } 
    
    else 
    { 
        cout << "Savings Account"; 
    } 
    cout << endl 
         << "Balance - " << balance << endl; 
}; 
 
void Account ::withdraw_money() 
{ 
    int w; 
    cout << endl 
         << "Enter your Amount for Withdraw : "; 
    cin >> w; 
    if (balance <= w) 
    { 
        cout << "Insufficient Balance!"; 
    } 
    else 
    { 
        balance = balance - w; 
        cout << endl 
             << "Available Balance : " << balance << endl; 
    }; 
} 
 
int main() 
{ 
 
    char ch; 
    int pin; 
    Account obj; 
 
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
            cout << endl 
                 << "============ Main Menu ============" << endl; 
            cout << endl 
                 << "1. Deposit Amount "; 
            cout << endl 
                 << "2. Withdraw Amount "; 
            cout << endl 
                 << "3. Display Inquiry "; 
            cout << endl 
                 << "4. Exit "; 
            cout << endl 
                 << "========================" << endl; 
 
            cout << "Select Your Option :- " << endl; 
            cin >> ch; 
 
            switch (ch) 
            { 
 
            case '1': 
                "1. Deposit Amount \n"; 
                obj.deposit_Money(); 
                break; 
 
            case '2': 
                "2. Withdraw Amount \n"; 
                obj.withdraw_money(); 
                break; 
 
            case '3': 
                "3. Display Inquiry \n"; 
                obj.display_account(); 
                break; 
 
            case '4': 
                goto end; 
                break; 
            } 
 
        } while (ch != 4); 
 
    end: 
        cout << endl 
             << "Thank you for using cart"; 
    } 
 
    return 0; 
}
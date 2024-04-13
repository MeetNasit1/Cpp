#include<iostream>
#include<string>
using namespace std;
 
 class book
 {
    private:
    int book_no;
    string book_title;
    float price;


    public:
    void input()
    {
        cout<<"enter the book no:-";
        cin>>book_no;
        cout<<"book title :-";
        cin>>book_title;
        cout<<"enter the prise:-";
        cin>>price;
    }

    void purchse()
    {
        cout<<"book no is:-"<<book_no<<endl;
        cout<<"book title is:-"<<book_title<<endl;
        cout<<"price is:-"<<price<<endl;
        
        
    }


 };

 int main()
 {
    book book1;
    book1.purchse();
    book1.input();

    return 0;
 }
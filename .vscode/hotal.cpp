#include<iostream>
using namespace std;

class Hotel
{
private:
    string name = "Surbhi Hotel";
    int menuOption;
    int selectItem;
    int billOption;

public:
    void displayHotelName()
    {
        cout << "Welcome to " << name << "!" << endl;
    }

    void printData()
    {
        
        cout<<"enter 0 exit"<<endl;
        cout << "Enter 1 to open the menu" << endl;
        cout << "Enter 2 to select an item" << endl;
        cout << "Enter 3 to show the bill" << endl;
        cin >> menuOption;
    }
    void manuopen()
    {
        if(menuOption=1)
        {
        cout<<"\t\t\t\tmanu"<<endl;
        cout<<"************************************************************"<<endl;
        cout<<"\t1           kaju kari       RS:-100"<<endl;
        cout<<"\t2          kaju kari       RS:-100"<<endl;
        cout<<"\t3           kaju kari       RS:-100"<<endl;
        cout<<"\t4           kaju kari       RS:-100"<<endl;

        cout<<"exit to manu to entrer 0"<<endl;
        cin>>menuOption;
       
    }
}
};

int main()
{
    Hotel hotel;

    hotel.displayHotelName();
    hotel.printData();
    hotel.manuopen();

    return 0;
}

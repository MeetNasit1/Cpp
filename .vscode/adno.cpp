#include<iostream>
#include<string>
using namespace std;

class report

{
    private:
    int adno;
    string name;
    float mark;
    float avarage;

    

    public:
    void readinfo()
    {
        cout<<"enter the the adno:-";
        cin>>adno;
        cout<<"enter the name:-";
        cin>>name;
        cout<<"enter the mark:-";
        cin>>mark;

        

    }

    void displayinfo()
    {
        cout<<"display adno:-"<<adno<<endl;
        cout<<"display name:-"<<mark<<endl;
        cout<<"display mark:-"<<mark<<endl;
    }

};

int main()
{
    report meet;
    meet.readinfo();
    cout<<"**************"<<endl;
    meet.displayinfo();

    return 0;
}
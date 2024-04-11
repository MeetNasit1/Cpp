#include<iostream>
using namespace std;
class  employe
{
    private:
    int id;
   int salary;
   public:
   int name;

   void addData()
   {
        cout<<"add id";
        cin>>id;
   }
 void show()
 {
    cout<<"employe id is:-"<<id;
 }
};
int main()
{
    employe ravi,meet;
    ravi.addData();
    ravi.show();
    meet.addData();
    meet.show();

    return 0;
}
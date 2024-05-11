#include<iostream>
using namespace std;

class Batsman
{
    private:
   int bcode;
   string bname;
   int innings, notout, runs;
   float batavg;

   void calcavg();


   public:
   string name;
  
   void readdata()
   {
       cout<<"enter bcode:";
       cin>>bcode;
       cout<<"enter bname:";
       cin>>bname;
       cout<<"enter innings:";
       cin>>innings;
       cout<<"enter notout:";
       cin>>notout;
       cout<<"enter runs:";
       cin>>runs; 
   }
   void displaydata()
   {
    cout<<"display bcode:-"<<bcode<<endl;
    cout<<"display bname:-"<<bname<<endl;
    cout<<"display innings:-"<<innings<<endl
    cout<<"display notout:-"<<notout<<endl;
    cout<<"display runs:-"<<runs<<endl;
 calcavg();
   }

};
void Batsman::calcavg()
{
    int total=0;
  total=batavg=runs/(innings-notout);
   cout<<"batsman avg is"<<total;

}
int main()
{
    Batsman c;
    c.readdata();
    c.displaydata();


}
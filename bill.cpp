#include<iostream>
using namespace std;
int main()
{
    float rate,qty,amount=0,dis=10,billamount,GST=0,Netamount=0;
    cout<<"enter the rate:-";
    scanf("\n%f",&rate);

     cout<<"\nenter the qty:-";
    scanf("\n%f",&qty);


    cout<<"\nrate";
    cout<<"\t\tqty";
    cout<<"\t\tamount";
    cout<<"\t\tdis";
    cout<<"\t\tbillamount";
    cout<<"\t\tGST";
    cout<<"\t\tNetamount";

    printf("\n%f",rate);
     printf("\t%f",qty);


     amount=rate*qty;
     printf("\t%f",amount);

     dis=amount*5/100;
     printf("\t%f",dis);

     billamount=amount-dis;
     printf("\t%f",billamount);

     GST=billamount*18/100;
     printf("\t\t%f",GST);

     Netamount=billamount+GST;
     printf("\t%f",Netamount);

     return 0;

}
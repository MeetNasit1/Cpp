#include<iostream>
using namespace std;
int main()
{
   char arr[]="hello";
    for(int i=1;i<6;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",arr[j]);
        }
        printf("\n");
    }
    return 0;
}
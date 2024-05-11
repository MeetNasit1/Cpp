#include<stdio.h>
int main()
{
    int k=0;
    int arr1[3]={1,2,3};
    int arr2[3]={4,5,6};
    int arr[6];


   for(int i=0;i<=2;i++,k++)
   {
    arr[i]=arr1[i];
   }
   for(int j=0;j<=2;j++,k++)
   {
    arr[k]=arr2[j];
   }
   for(int u=0;u<=5;u++)
   {
    printf("%d",arr[u]);
   }
    return 0;
}


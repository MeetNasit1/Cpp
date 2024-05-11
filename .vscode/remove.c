#include<stdio.h>

    
    int deelet(int index,int arr[100],int size)
    {
        printf("enter the size of array:-");
        
        for(int i=index;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++)
    {
        printf("%d \t",arr[i]);
    }
    return 0;
    }


int main()
{

    int index=2;
    int arr[100];
    int size=5;
    deelet(index,arr,size);

    return 0;
}
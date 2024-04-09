#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*ptr;
    char string[50]="123456 456895";

    ptr=fopen("bill.cpp","r");
    while(fscanf(ptr,"%s",string)!=EOF)
    {
        printf("%s",string);
    }
}
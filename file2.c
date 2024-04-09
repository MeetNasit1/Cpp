#include<stdio.h>
#include<conio.h>
int main()
{
    FILE*ptr;
    char string[50]="123456 456895";

   ptr=fopen("meet.txt","a");
   gets(string);
   fprintf(ptr,"%s",string);
}
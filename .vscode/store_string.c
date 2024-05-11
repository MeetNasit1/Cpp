#include<stdio.h>
int main()
{
    char arr1[50]={"Skill"};
    char arr2[50]={"Qode"};
    char arr3[50];
    int k=0;

    for(int i=0;arr1[i];i++,k++)
    {
        arr3[i]=arr1[i];
    }
    for(int j=0;arr2[j];j++,k++)
    {
        arr3[k]=arr2[j];
    }
    for(int t=0;t<1;t++)
    {
        printf("%s",arr3);
    }
}
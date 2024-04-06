#include<stdio.h>
int main()
{
    int a;
    printf("enter the value");
    scanf("%d",&a);

    switch(a)
    {
        case 1:

        printf("enter the value 1");
        break;

        case 2:
        printf("enter the value 2");

        break;

        case 3:
        printf("enter the value 3");
        break;

        case 4:
        printf("enter the value 4");
        break;

        case 5:
        printf("enter the value 5");
        break;

        default:
        printf("enter the value<5");
        

        return 0;
    }
}
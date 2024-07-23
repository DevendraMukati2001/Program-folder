#include <stdio.h>
void main()
{
    int num;
    printf("enter the num:");
    scanf("%d",&num);
    if(num%7==0);
        printf("the number is divisible by seven",num);
    else
        printf("the number is not divisible by seven",num);
    getch();
}

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter first no.");
    scanf("%d",&a);
    printf("enter second no.");
    scanf("%d",&b);
    c=a+b;
    printf("the addition of no=%d",c);
    printf("\n");
    c=a-b;
    printf("the subtraction of no=%d",c);
    printf("\n");
    c=a*b;
    printf("the multiplication of no=%d",c);
    printf("\n");
    c=a/b;
    printf("the division of no=%d",c);
    printf("\n");
    getch();
}


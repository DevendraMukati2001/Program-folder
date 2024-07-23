#include<stdio.h>
int main()
{
    int num;
    printf("enter a num:");
    scanf("%d",&num);

    if(num%7 == 0)
        printf("this is divisible by 7",num);
    else
        printf("this is not divisible by 7",num);

    return 0;
}

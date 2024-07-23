#include<stdio.h>
#include<conio.h>
int main()
{

    float meter,f,km;
    printf("enter meter:");
    scanf("%f",&meter);
    f=3.28*meter;
    km=meter/1000.00;
    printf("feet:%f",f);
    printf("\nkm:%f",km);
    return 0;
}

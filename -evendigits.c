#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,x,result=0;
    i=1;
    printf("enter the value upto which you have to calculate");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        x=(-1);
        else
        x= 1;
        result = result +(x*i*i);
        i++;
    }
    printf("%d",result);
    getch();
}

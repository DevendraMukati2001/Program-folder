#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,k;
    printf("enter the no:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(k=1;k<=n-i;k++)
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
    }
    getch();
}

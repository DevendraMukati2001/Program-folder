#include<stdio.h>
void swap(int *,int *);
int main()
{
    int x,y;
    printf("\n enter first and second no");
    scanf("%d%d",&x,&y);
    printf("\n in main function x=%d \t y=%d",x,y);
    swap(&x,&y);
    printf("|n in after swap function call x=%d \t y=%d",x,y);
    return 0;
}
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    printf("\n in swap function x=%d \t y=%d",*p,*q);
}

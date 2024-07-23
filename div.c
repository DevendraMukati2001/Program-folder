#include<stdio.h>
int main()
{
    int rno;
    float p,c,m,total,pr;
    printf("\nenter rollno");
    scanf("%d",&rno);
    printf("\nplease enter all subject marks out of 100");
    printf("\nenter maths marks");
    scanf("%f",&m);
    printf("\nenter physic marks");
    scanf("%f",&p);
    printf("\nenter chemistry marks");
    scanf("%f",&c);
    total=m+p+c;
    printf("\ntotal marks=%f",total);
pr=total/3.0;
printf("percentage=%f",pr);
if((pr<33)&&(pr<=33))
{
    printf("fail");
}
if((pr>=35)&&(pr<45))
{
    printf("third division");
}
     if((pr>=45)&&(pr<60))
    {
        printf("second division");
    }
     if(pr>=60)
    {
        printf("first division");
    }
     return 0;
}

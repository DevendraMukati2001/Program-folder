#include<stdio.h>
#include<conio.h>
void main()
{
int n;
float a,b,c;
char sign,answer;
do
  {
  printf("Enter your choice of operator\n");
  scanf("%d",&n);
  switch(n)
 {

 case 2:
     printf("enter two no:");
     scanf("%f%f",&a,&b);
     c=a+b;
    printf("The addition is %f\n",c);
                  break;
  case 3:
    printf("enter two no:");
    scanf("%f%f",&a,&b);
    c=a-b;
    printf("The subtraction is %f\n",c);
    break;
  case 4:
     printf("enter two no:");
     scanf("%f%f",&a,&b);
     c=a*b;
     printf("The product is %f\n",c);
     break;
  case 5:
     printf("enter two no:");
     scanf("%f%f",&a,&b);
     c=a/b;
     printf("The division is %f\n",c);
     break;
 }
    printf("(y or no)\n");
    scanf("%c",&answer);
}
while(answer!='n');
}

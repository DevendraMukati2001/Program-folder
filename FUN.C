//multiply
/*#include<stdio.h>
#include<conio.h>
int area(int,int);
int main()
{
    int ar,x,y;
    printf("\n enter length and width");
    scanf("%d%d",&x,&y);
    ar=area(x,y);
    printf("\n area=%d",ar);
    getch();
}
int area(int x,int y)
{
    int a;
    a=x*y;
    return a;
}*/
//add
/*#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int sum=add(2,3);
    printf("%d",sum);
    return 0;
}*/
//funtion to pointer
/*#include<stdio.h>
#include<conio.h>

int ptr_fun(int a,int b) //function declare
{
return a+b;
}

int main()
{
int (*k)(int,int)=&ptr_fun; //k is the function pointer
int sum=k(5,6); //calling the function via the function pointer
printf("sum = %d",sum);
return 0;
}*/
//power a to b
/*#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    printf("%d",ans);
}*/
//pow in funtion
/*#include<stdio.h>
int pow(int a,int b)
{
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
 int a,b;
 scanf("%d%d",&a,&b);
int answer=pow(a,b);
printf("answer is=%d\n",answer);
 return 0;
}*/
/*#include<stdio.h>
#include<math.h>

int factorial(int n)
{
    int fact=1;

    for(int i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r)
{
    int num=factorial(n);
    int denom=factorial(r)+factorial(n-r);
    return num/denom;
}
int main()
{ int n,r;
    scanf("%d%d",n,r);
    printf("Enter a Number to Find ncr: ");
    printf("\nFactorial of a Given Number is: %d ",ncr(n,r));
    return 0;
}
/*#include<stdio.h>
bool iseven(int a)
{
    if(a&1)
    {
        return 0;
    }else
    {
    return 1;
    }

}
int main()
{
    int num;
    scanf("%d",num);
    if(iseven(num))
    {
        printf("no. is even\n");
    }
    else
    {
        printf("no is odd");
    }
}*/
/*#include<stdio.h>
bool isprime(int n) //bool is a return type
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",n);
    if(isprime(n))
    {
        printf("is a prime no");
    }
    else
    {
       printf("is not a prime no");
    }
}*/
/*#include<stdio.h>
void printcounting(int num)
{
    for(int i=1;i<=num;i++)
    {
    printf("%d\t",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printcounting(n);
}*/
/*#include<stdio.h>
int add(int,int);
int main()
{
    int p,q,r;
    scanf("%d%d",&p,&q);
    r=add(p,q);
    printf("%d",r);
}
int add(int a,int b)
{
  return a+b;
}*/
//generateFibo
/*#include <stdio.h>

//Function declaration
void generateFibo();

int main()
{
    generateFibo();
    return 0;
}

// Function definition
void generateFibo()
{
    int a, b, c, i, terms;

    //Input a number from user
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    a = 0;
    b = 1;
    c = 0;

    printf("Fibonacci terms: \n");

    // Iterate through n terms
    for(i=1; i<=terms; i++)
    {
        printf("%d, ", c);
        a = b;      // Copy n-1 to n-2
        b = c;      // Copy current to n-1
        c = a + b;  // New term
    }
}*/
//cube
/*#include<stdio.h>
int cube(int n);
int main()
{
   int num;
    int c;
    printf("enter the no:");
    scanf("%d",&num);
    c=cube(num);
    printf("cube is =%d",c);
}
int cube(int num)
{
    return num*num*num;
}*/
//area of circle
/*#include<stdio.h>
#define pi 3.14
int circlearea(int r)
 {
    // area = pi * r^2
    return pi * r* r;
}
int cicimfere(int r)
{
    return 2*pi*r;
}

int main()
{
    float r, area,circumference;
    printf("Enter the radius of Circle: ");
    scanf("%f", &r);
    // call 'area' function with 'radius'
    area = circlearea(r);
    circumference=cicimfere(r);


    // print the result
    printf("Area of Circle with %f radius is : %f \n", r, area);
    printf("circmference of Circle with %f radius is : %f \n", r, circumference);

    return 0;
}*/
// C program to implement
// the above approach
/*#include <math.h>
#include <stdio.h>

// Driver code
int main()
{
double Number;
Number = 5;

// Computing the square root with
// the help of predefined C
// library function
double squareRoot = sqrt(Number);

printf("The Square root of %.2lf = %.2lf",
		Number, squareRoot);
return 0;
}*/
/*#include<stdio.h>
void printname();
int main()
{
    printf("hello");
    printname();
}
void printname()
{
    printf("javatpoint0");
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int square;
    scanf("%d",&square);
    printf("%d",square*square);
}*/
/*#include<stdio.h>
int sqr(int ,int);
int sqr(int n,int i)
{
    return i*i;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    printf("%d\t",sqr(n,i));
    }
}*/
/*#include<stdio.h>
int add(int,int);
int add(int a,int b)
{
return a+b;
}
int mul(int a,int b)
{
    return a*b;
}
int main()
{
    int j,k;
    scanf("%d%d",&j,&k);
    printf("add is etta %d",add(j,k));
    printf("\nmultiply is %d",mul(j,k));
}*/
#include<stdio.h>
//int change(int num)
int change(int *num) //for cALL BY REFERNCES
{
    //printf("before adding value inside function=%d",num);
    printf("\nbefore adding value inside function=%d",*num);

   // num=num+100;
    *num=*num+100;
    //printf("after adding value inside function=%d",num);
    printf("\nafter adding value inside function=%d",*num);
}
int main()
{
    printf(" ");
    int x=100;
    printf("Before function call x=%d",x);
    //change(x);//passing value of the funciton
    change(&x);//call by reference
    printf("\nafter function call x=%d",x);
    printf("\n\n\n");
}


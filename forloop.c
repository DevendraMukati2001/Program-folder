/*#include<stdio.h>
int main()
{
    int i,a;
    printf("enter a no.");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    printf("%d hello\t\n\a",i);
    return 0;
}*/
//lcm AND hcf of two no.
/*#include<stdio.h>
int main()
{
    int a,b,g,hcf,i,lcm;
    printf("enter two no:");
    scanf("%d%d",&a,&b);
    if(a>b)
        g=a;
    else
        g=b;
    for(i=g;i<=(a*b);i++)
    {
        if((i%a==0)&&(i%b==0))
        {
            lcm=i;
            break;
        }
    }
printf("\the lcm of given no is=%d",lcm);
hcf=(a*b)/lcm;
printf("\n the hcf of given no is=%d",hcf);
return 0;
}*/
//multiplication
/*#include<stdio.h>
int main()
{
    int a,b,i;
    printf("enter the no. of table you want:");
    scanf("%d",&b);
    for(i=1;i<=10;i++)
    {
    a=b*i;
    printf("%d*%d=%d\n",b,i,a);
    }
    return 0;
}*/
//natural no. print
/*w#include<stdio.h>
int main()
{
    int a=1,n,sum=0;
    scanf("%d",&n);
    while(a<=n)
    {
        sum=sum+a;
        a++;
        printf("%d\t",sum);
    }
    printf("\nvalue of sum is:%d",sum);
    return 0;
}*/
//npw que is sum of even no.
/*#include<stdio.h>
int main()
{
    int a=2,n,sum=0;
    scanf("%d",&n);
    while(a<=n)
    {
        //sum=sum+a;
        a=a+2;
        sum=sum+a;

        printf("%d\t",sum);
    }
    //printf("\nvalue of sum is:%d",sum);
    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int a=2,n;
    scanf("%d",&n);
    while(a<n)
    {
        if(n%a==0)
        {
            printf("not prime=%d\n",a);
        }
        else
        {
            printf("prime=%d\n",a);
        }
        a=a+1;
    }
}*/
/*#include<stdio.h>
int main()
{
    int i=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        int j=1;
        while(j<=n){
            printf("*");
            j=j+1;
        }
printf("\n");
i=i+1;
    }
} */
//leader index element
/*#include <stdio.h>

void printLeaders(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] <= arr[j])
                break;
        }
        if (j == size) // the loop didn't break
            printf("%d ", arr[i]);
    }
}

/* Driver program to test above function
int main()
{
    int arr[] = { 16, 17, 4, 3, 5, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}*/
/**
 * C program to print Strong numbers in given range
 */

/*#include <stdio.h>
int main()
{
    int i, j, cur, lastDigit, start, end;
    long long fact, sum;
    printf("Enter lower limit: ");
    scanf("%d", &start);
    printf("Enter upper limit: ");
    scanf("%d", &end);
    printf("All Strong numbers between %d to %d are:\n", start, end);
    /* Iterate from 1 to end
    for(i=start; i<=end; i++)
    {
        /* Number to check for strong number
        cur = i;
        sum = 0;
        /* Find the sum of factorial of digits
        while(cur > 0)
        {
            fact = 1ll;
            lastDigit = cur % 10;
            /* Find factorial of last digit of current num.
            for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }
            sum += fact;
            cur /= 10;
        }
        /* Print 'i' if it is strong number
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}*/
/*#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        int k=1;
        for(j=0;j<5-i;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("%d",k);
            k=k*(i-j)/(j+1);
        }printf("\n");
    }

}*/
//geometric pattern
#include<stdio.h>
int main()
{
    int i,j,sidelenght;
    printf("enter the sidelenght of square:");
    scanf("%d",&sidelenght);
    for(i=1;i<=sidelenght;i++)
    {for(j=1;j<=sidelenght;j++)
        {
        if(i==1||i==sidelenght||j==1||j==sidelenght)
        {
            printf("*");
        }
        else
        {
        printf(" ");
        }

    }
    printf("\n");
    }
    return 0;
}




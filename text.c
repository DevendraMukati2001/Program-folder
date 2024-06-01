//percentage in array
#include<stdio.h>
int main()
/*{
    int n;
    float p,sum=0;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;i<n;i++)
        scanf("%f",&arr[i]);
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
    printf("the sum is %f ",sum);
    p=sum/n;

        printf("the percentage is %f ",p);

}*/
/*even wala
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
}*/
//prime wala
{

  int n,count,a=1,i;
    scanf("%d",&n);
    while(a<=n)
    {
        count=0;
        i=2;
        while(i<=a/2)
        {
            if(a%i==0)
            {
                count++;
                break;
            }
            i++;
        }
    if(count==0&&a!=1)
    {
        printf("%d ",a);
    }
    a++;
}
return 0;
}





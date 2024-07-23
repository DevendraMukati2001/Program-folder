//dQueue in c
/*#include<stdio.h>
#define max 5
void insertq();
void insertq2();
void deleteq();
void deleteq2();
void displayq();
struct deque{
int f,r;
int q[max];
};
struct deque d;

void insertq()
{
if(d.r==max-1&&d.f==0||d.f==d.r+1)
    printf("dQueue is full at the rear end");
else
{
    int ele;
       printf("enter the element be pushed in rear end:");
       scanf("%d",&ele);
    if(d.f==-1)
    {
     d.f=0;
     d.r=0;
     d.q[d.f]=ele;
    }
    else if(d.f==0)
    {
    d.f=max-1;
    d.q[d.f]=ele;
    }
    else{
    d.f--;
    d.q[d.f]=ele;
    }
  }
}
void insertq2(){

   if((d.f==0&&d.r==max-1)||d.f==d.r+1)
    printf("dQueue is full at the front end");
   else
 {
     int a;
       printf("enter the element be pushed in front end:");
       scanf("%d",&a);
    if(d.f==-1) //esme se htaya gya d.r=-1
    {
    d.r=0;
    d.f=0;
    d.q[d.r]=a;
    }
    else if(d.r==max-1)
{
 d.r=0;
 d.q[d.r]=a;
}
else{
    d.r=d.r-1;
    d.q[d.r]=a;
}
}
}
void deleteq()
{
    if(d.f==-1&&d.r==-1)
    printf("dqueue is empty at the front end 1");
    else
    {
        printf("deleted element is %d ",d.q[d.f]);

        if(d.f==d.r)
        d.f=d.r=-1;
        else if(d.f==max-1)
        {
            d.f=0;
        }
        else{
            d.f=d.f+1;
        }

    }
}

void deleteq2()
{
    if(d.f==-1&&d.r==-1)
    printf("dqueue is empty at the rear end 1");
    else
    {
        printf("deleted element is %d ",d.q[d.r]);

        if(d.f==d.r)
        d.f=d.r=-1;
        else if(d.r==0)
        {
            d.r=max-1;
        }
        else{
            d.r=d.r-1;
        }
    }
}

void displayq()
{

    if(d.f==-1&&d.r==-1)
    printf("dqueue is empty at the front end 1");
    else
    {
       int i=d.f;
       while(1)
       {
           printf("%d\n",d.q[i]);
           if(i==d.r)
           {
               break;
           }
             else{
            i=(i+1)%max;
           }
       }
}
}

void main()
{
   int choice;
   d.f=-1;
   d.r=-1;
    do{
   printf("\n-----Queue menu------\n");
   printf("\n1.insertq\n2.insertq2\n3.delete\n4.deleteq2\n5.displayq\n6.exit\n");
   printf("enter the choice");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:insertq();
       break;
       case 2:insertq2();
       break;
       case 3:deleteq();
       break;
       case 4:deleteq2();
       break;
       case 5:displayq();
       break;
       case 6:printf("exit information on stack");
          break;
          default:printf("invalide choice");
   }
     }while(choice!=6);
}
*/
#include<stdio.h>
#define max 10

struct queue {
    int q[max];
    int f, r;
};

struct queue Q;

void insertr() {
    if ((Q.r == max - 1 && Q.f == 0) || (Q.f == Q.r + 1))
        printf("dequeue is Full");
    else {
        int a;
        printf("enter the element\n");
        scanf("%d", &a);
        if (Q.f == -1 && Q.r == -1)
            Q.f = 0;
        Q.r = (Q.r + 1) % max;
        Q.q[Q.r] = a;
    }
}

void insertf() {
    if ((Q.r == max - 1 && Q.f == 0) || (Q.r == Q.f - 1))
        printf("dequeue is Full");
    else {
        int b;
        printf("enter the element\n");
        scanf("%d", &b);
        if (Q.f == -1 && Q.r == -1)
            Q.r = 0;
        Q.f = (Q.f - 1) % max;
        Q.q[Q.f] = b;
    }
}

void deleter() {
    if (Q.f == -1 && Q.r == -1)
        printf("Queue is empty");
    else {
        printf("deleted element is %d", Q.q[Q.r]);
        if (Q.f == Q.r)
            Q.f = Q.r = -1;
        else
            Q.r = (Q.r - 1) % max;
    }
}

void deletef() {
    if (Q.f == -1 && Q.r == -1)
        printf("Queue is empty");
    else {
        printf("deleted element is %d", Q.q[Q.f]);
        if (Q.f == Q.r)
            Q.f = Q.r = -1;
        else
            Q.f = (Q.f + 1) % max;
    }
}

void displayr() {
    if (Q.f == -1 && Q.r == -1)
        printf("Queue is empty");
    else {
        int i = Q.r;
        do {
            printf("%d ", Q.q[i]);
            i = (i - 1) % max;
        } while (i != Q.f);
    }
}

void displayf() {
    if (Q.f == -1 && Q.r == -1)
        printf("Queue is empty");
    else {
        int i = Q.f;
        do {
            printf("%d ", Q.q[i]);
            i = (i + 1) % max;
        } while (i != (Q.r + 1) % max);
    }
}

int main() {
    int choice;
    Q.f = -1;
    Q.r = -1;
    do {
        printf("\n1.insertr\n2.insertf\n3.deleter\n4.deletef\n5.displayr\n6.displayf\n7.exit\n");
        printf("\nenter the choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insertr();
                break;
            case 2:
                insertf();
                break;
            case 3:
                deleter();
                break;
            case 4:
                deletef();
                break;
            case 5:
                displayr();
                break;
            case 6:
                displayf();
                break;
            case 7:
                printf("exit information on queue");
                break;
            default:
                printf("invalid choice");
                break;
        }
    } while (choice != 7);
    return 0;
}


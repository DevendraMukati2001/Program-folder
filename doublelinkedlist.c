#include<stdio.h>
#include<malloc.h>
struct node{
int data;
struct node*prev;
struct node*next;
}*start,*temp,*last,*p,*q;
void main()
{
    start=NULL;
    last=NULL;
    int choice,n;
    do{printf("\n1.insertatfirst\n2.deletedatfirst\n3.insertatlast\n4.deletedatlast\n5.forward1\n6.backward1\n");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("enter the element");
        scanf("%d",&n);
        insertatfirst(n);
        break;
        case 2:deletedatfirst();
        break;
        case 3:printf("enter the element");
        scanf("%d",&n);
        insertatlast(n);
        break;
        case 4:deletedatlast();
        break;
        case 5:forward1();
        break;
        case 6:backward1();
        break;
        case 7:printf("exit information of appplication\n");
        break;
        default:printf("invalid choice");
        }
    }while(choice!=7);
}
void insertatfirst(int ele)
{
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=ele;
    temp->prev=NULL;
    if(start==NULL)
    {
        temp->next=NULL;
        last=temp;
    }
    else{
        temp->next=start;
        start->prev=temp;
        }
        start=temp;
}
void deletedatfirst()
{
    if(start==NULL)
        printf("list is empty");
    else{
        printf("deleted element is %d",p->data);
        p=start;
        if(p->next=NULL)
        {
            start=NULL;
            last=NULL;
        }else{
        start=p->next;
        start->prev=NULL;
        }
        free(p);
    }
}
void insertatlast(int ele)
{
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=ele;
  temp->next=NULL;
  if(start==NULL)
  {

      temp->prev=NULL;
      start=temp;
      last=temp;
  }
  else{
    last->next=temp;
    temp->prev=last;
    last=temp;
  }
}
void deletedatlast()
{
  if(start==NULL)
  printf("list is empty");
  else{
        printf("deleted element is %d",p->data);
    p=last;
    if(start==last)
        start=last=NULL;
    else
        last->prev->next=temp;
       last=last->prev;
  }
  free(p);
}
void forward1()
{
    if(start==NULL)
        printf("list is empty");
    else{
        p=start;
        while(p!=NULL)
        {
           printf("%d ",p->data);
           p=p->next;
        }
    }
}
void backward1()
{
    if(start==NULL)
        printf("list is empty");
    else{
        p=last;
        while(p!=NULL)
        {
           printf("%d ",p->data);
           p=p->prev;
        }
    }
}

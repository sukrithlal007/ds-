#include<stdio.h>
#include<conio.h>
#define max 20
int q[max],rear=-1,front=-1;
void add();
void delet();
void search();
void display();
void main()
{
int ch;
clrscr();
do
{
printf("\nMENU");
printf("\n1.Insertion\t\t2.Deletion\t\t3.Search\t4.Display\t\t5.EXIT");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:add();
		   break;
case 2:delet();
		   break;
case 3:search();
		   break;
case 4:display();
		   break;
case 5:exit(0);
default:printf("\nInvalid choice");
		break;
}
}while(ch!=5);
getch();
}
void add()
{
int i,item;
printf("\nEnter the element to add\n");
scanf("%d",&item);
if((front==-1)&&(rear==-1))
{
front=0;
rear=0;
q[rear]=item;
}
else if((rear+1)%max==front)
{printf("\noverflow");
}
else
{
rear=(rear+1)%max;
q[rear]=item;

 }

i=front;
while(i!=rear+1)
{
printf("%d\t",q[i]);
i=(i+1)%max;
}
}
void delet()
{
if((front==-1) && (rear==-1))
    {
	printf("\nQueue is underflow..");
    }
 else if(front==rear)
{
   printf("\nThe dequeued element is %d", q[front]);
   front=-1;
   rear=-1;
}
else
{
    printf("\nThe dequeued element is %d", q[front]);
   front=(front+1)%max;
}
}
void search()
{ int item,flag=0,i;
printf("\nEnter the element to search:");
scanf("%d",&item);
i=front;
while(i!=rear+1)
{
if(q[i]==item)
{
printf("\nElement found at %d position",i+1);
flag=1;
}
i=(i+1)%max;
}
if(flag==0)
{
printf("Element not found");
}

}

void display()
{
int i;
i=front;
while(i!=rear+1)
{
printf("%d\t",q[i]);
i=(i+1)%max;
}
}

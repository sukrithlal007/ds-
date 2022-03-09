#include<stdio.h>
#define max 6
int stack[max],top=-1;
void push();
void pop();
void search();
void traverse();
void main()
{
int ch;
clrscr();
do
{
printf("\nMENU");
printf("\n1.PUSH\t\t2.POPt\t3.SEARCH\t4.TRAVERSE\t\t5.EXIT");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
      break;
case 2:pop();
       break;
case 3:search();
      break;
case 4:traverse();
       break;
case 5:exit(0);
default:printf("\nInvalid choice");
     break;
}
}while(ch!=5);
getch();
}
void pop()
{
if(top==-1)
printf("\nunderflow");
else
top=top-1;
}
void push()
{
int item;
if(top==max)
{printf("\nOverflow");  }
else
{
printf("\nEnter the value");
scanf("%d",&item);
top=top+1;
stack[top]=item;
 }
     }
 void traverse()
 { int i;
 for(i=top;i>=0;i--)
 printf("\n%d",stack[i]);
 if(top==-1)
 printf("\nunderflow") ;
 }

  void search()
 {  int item,i,f=0;
 printf("\nEnter the value");
 scanf("%d",&item);
  for(i=top;i>=0;i--)
  {
  if(stack[i]==item)
  {printf("\n Element found");
  f++;  }
  }
  if(f==0)
   printf("\n Element not found");
}




#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int ar[10],i,j;
void creation();
void unionop();
void find();
void display();
void main()
{
	int ch;
	printf("\n________DISJOINT SET OPERATIONS_________");
	creation();
	while(1)
	{
		printf("\n\n1.UNION\n2.FIND\n3.DISPLAY\n4.EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:	display();
				unionop();
				display();
				break;
			case 2:find();
				break;
			case 3:display();
				break;
			case 4:exit(0);
			default:printf("\nInvalid choice");
		 }
       }
      
}
void creation()
{
for(i=0;i<10;i++)
	ar[i]=i;
}
void unionop()
{
	int a,b,temp;
	printf("\n\nEnter the 1st element:");
	scanf("%d",&a);
	printf("\nEnter the 2nd element:");
	scanf("%d",&b);
	temp=ar[a];
	for(i=0;i<10;i++)
	{
		if(ar[i]==temp)
		{
			ar[a]=ar[b];
		}
	}
}
void find()
{
	int a,b;
	printf("\n\nEnter the 1st element:");
	scanf("%d",&a);
	printf("\nEnter the 2nd element:");
	scanf("%d",&b);
	if(ar[a]==ar[b])
	{
		printf("\nTRUE");
	}
	else
	{
	printf("\nNO UNION");
	}
}
void display()
{
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d\t|",ar[i]);
}


#include<stdio.h>
#include<conio.h>
void main()
{
int a[4],c[4],k=0,n,i,j,m,b[4],t;
clrscr();
printf("enter the value of m");
scanf("%d",&m);
printf("enter the value of n");
scanf("%d",&n);
printf("\n enter the first array");
for(i=0;i<m;i++)
{
scanf("%d",&a[i]);
}

printf("\n enter the second array");
for(j=0;j<n;j++)
{
 scanf("%d",&b[j]);
 }
printf("\n sorted array is");
for(i=0;i<m;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<m;i++)
{
for(j=i+1;j<n;j++)
{
if(b[i]>b[j])
{
t=b[i];
b[i]=b[j];
b[j]=t;
}
}
}
i=0;
j=0;
while(i<m && j<n)
{
if(a[i]<=b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
}

}
while(i<m)
{
c[k]=a[i];
k++;
i++;
}
while(j<n)
{
c[k]=b[j];
k++;
j++;
}
 printf("\n the first  array is\n ");
for(i=0;i<m;i++)
{
printf("%d ",a[i]);
}
printf("\n the second  array is\n ");
for(j=0;j<n;j++)
{
printf("%d ",b[j]);
}
printf("\n merged array is");
for(i=0;i<m+n;i++)
{
printf(" %d",c[i]);
}
 getch();
 }

#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
void main()
{
double cubroot,cube;
int a[10]={10,36,54,89,12,27},w[10],i,j,N=6,count=0,A,sum=0,k,t; 
for(i=0;i<N;i++)
{ 
A=a[i];
w[i]=0;
cubroot=ceil(pow(A,(1/3))); 
cube=cubroot*cubroot*cubroot; 
if(A==cube)
w[i]=w[i]+5; 
if(A%4==0 && A%6==0)
w[i]=w[i]+4; 
for(j=2;j<=A;j++)
{
if(A%j == 0)
count=count+j;
}
if(A==1 || A==count)
w[i]=w[i]+3;
}
printf("\n\nELEMENT\t\t\t\tWEIGHT \n\n"); 
for(i=0;i<N;i++)
{
printf("%d \t\t\t\t%d\n\n",a[i],w[i]); 
sum=sum+w[i];
}
printf("The sum of Weights is = %d ", sum);
printf("Sorting of the Elements based on weight values\n"); 
for(i=0;i<N;i++)
for(j=0;j<N;j++)
if(w[j]>w[j+1])
{
t=w[j]; 
w[j]=w[j+1]; 
w[j+1]=t;
for(i=0;i<N;i++)
{
k=a[j]; 
a[j]=a[j+1]; 
a[j+1]=k;
}
printf("<%d,%d> \t",a[i],w[i]);
}
getch();
}

#include<stdio.h> 
void main()
{
float height[20],avg; 
int N,i,sum=0,count=0; 
printf("Enter the no. of persons"); 
scanf("%d",&N);
printf("Enter the persons height on eby one\n"); 
for(i=0;i<N;i++)
{
scanf("%f",&height[i]); sum=sum+height[i];
}
avg=sum/N; for(i=0;i<N;i++)
{
if(height[i]>avg)
{ count=count+1; }
}
printf("Totally %d Persons are having above average height",count); 
}


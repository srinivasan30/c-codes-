#include<stdio.h>
struct student
{
char name[20]; 
int t[15][15]; 
int mark[5];
};
void internal( struct student); 
void main()
{
struct student s; 
int j,k;
for(j=0;j<3;j++)
{
printf("Enter the internal test %d marks for five subjects:\t",j+1); 
for(k=0;k<5;k++)
scanf("%d",&s.t[j][k]);
}
internal(s); 
getch();
}
void internal(struct student s1)
{
int i,j,k,sum[20],c=0; 
for(j=0;j<5;j++)
{
c=0;
for(k=0;k<3;k++)
{
c=c+s1.t[k][j];
}
s1.mark[j]=((c/3)/5);
}
for(i=0;i<5;i++)
printf("\nSubject %d Internal Mark (max. marks 20)= %d",i+1,s1.mark[i]);
}

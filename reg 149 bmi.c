#include<stdio.h> 
#include<conio.h> 
void main()
{
float height[20],weight[20],BMI[20],HIM[20]; 
int i,j,N;
clrscr();
printf("\nEnter the No.of the elements\n"); 
scanf("%d",&N);
printf("\n Enter the Height & Weight values\n"); 
for(i=0;i<N;i++)
{
scanf("%f%f",&height[i],&weight[i]); 
HIM[i]=height[i]/100;
}
printf("\nPerson\tHeight\tWeight\tBMS\n");
for(i=0;i<N;i++)
{
BMI[i]=weight[i]/(HIM[i]*HIM[i]); 
printf("\n%d\t%.2f\t%.2f\t%.2f\n",(i+1),HIM[i],weight[i],BMI[i]);
}
getch();
}

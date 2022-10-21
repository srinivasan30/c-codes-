#include<stdio.h>
#include<conio.h> 
void main()
{
int regno;
char name[25]; 
float GPA;
printf("\nEnter a Student Regno,Name & GPA\n"); 
scanf("%d%s%f",&regno,name,&GPA);
printf("\n \n"); 
printf("\n\t\t REG.NO \t\t NAME \t\t GPA \t\t\n"); 
printf("\n \n"); 
printf("\t\t%d\t\t%s\t\t%f\t\t",regno,name,GPA);
}


#include<stdio.h> 
struct employee
{
char ename[25]; 
int eid;
char edes[20]; 
char edept[20]; 
int esal;
};
void salaryslip(struct employee *e,int n)
{
int id,i;
printf("\nEnter the employee id to generate the salary slip\n"); 
scanf("%d",&id);
for(i=0;i<=n;i++)
{
if((e+i)->eid==id)
{
printf("\n "); 
printf("\nNAME\t\tDEPARTMENT\t\tDESIGNATION\t\tSALARY"); 
printf("\n ");
printf("\n%s\t\t%s\t\t      %s\t\t       %d",(e+i)->ename,(e+i)->edept,(e+i)->edes,(e+i)->esal); 
printf("\n ");
}
}
}
void main()
{
struct employee emp[20],*emp1; 
int m,i;
printf("Enter the no. of employee details"); 
scanf("%d",&m);
printf("\nEnter employee id, name, department, designation & salary\n"); 
for(i=0;i<m;i++)
{
scanf("%d%s%s%s%d",&emp[i].eid,&emp[i].ename,&emp[i].edes,&emp[i].edept,&emp[i].esal);
}
emp1=emp; 
salaryslip(emp1,m);
getch();
}


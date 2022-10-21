#include <stdio.h>
void insert(); 
void count();
int main(void)
{
int choice = 0; 
while (choice != 3)
{
printf("\n1 insert records\n");
printf("2 Count min balance holders\n"); 
printf("3 Exit\n");
printf("Enter choice:"); 
scanf("%d", &choice); 
switch(choice)
{
case 1: insert(); break; 
case 2: count(); break;
}
}
}
void insert()
{
unsigned int account,i; 
char name[30];
double balance; 
FILE* cfPtr;
if ((cfPtr = fopen("clients.dat", "w")) == NULL) { 
puts("File could not be opened");
}
else {
int records,i=0;
printf("Enter the No. of records "); 
scanf("%d", &records);
while (i<records)
{
printf("Enter the account, name, and balance."); 
scanf("%d%29s%lf", &account, name, &balance); 
fprintf(cfPtr, "%d %s %.2f\n", account, name, balance); 
i++;
}
fclose(cfPtr);
}
}
void count()
{
unsigned int account; 
char name[30]; 
double balance;
float minBal = 5000.00; 
int count = 0;
FILE *cfPtr;
if ((cfPtr = fopen("clients.dat", "r")) == NULL) 
printf("File could not be opened");
else
{
printf("%-10s%-13s%s\n", "Account", "Name", "Balance"); 
fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
while (!feof(cfPtr))
{
if (balance < minBal)
{
printf("%-10d%-13s%7.2f\n", account, name, balance); 
count++;
}
fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
}
fclose(cfPtr);
printf("The number of account holders whose balance is less than the minimum balance:%d", count);
}
}


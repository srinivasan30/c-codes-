#include<stdio.h>
#include<string.h>
int findIndex(char a[],char c)
{
    int p=0,len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]==c)
        p=i+1;

    }return p;
}
void main()
{
char str[100],c;
printf("\nenter a string:");
gets(str);
printf("\nenter a character to find its position:");
scanf("%c",&c);
int p=findIndex(str,c);
if(p==0)
printf("\ncharacter not found");
else
printf("Index of the given charcter is:%d",p);
}

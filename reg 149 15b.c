#include<stdio.h> 
struct teledir
{
int no;
char name[3];
};
void main()
{
struct teledir t1,t2,t3; 
int i,n,p,newp;
FILE *fp,*fp1; 
clrscr(); 
fp=fopen("td.txt","w");
printf("Enter the no of records\n"); 
scanf("%d",&n);
printf("Enter the record\n"); 
for (i=0;i<n;i++)
{
scanf("%d%s",&t1.no,t1.name); 
fwrite(&t1,sizeof(struct teledir),1,fp);
}
fclose(fp); 
fp=fopen("td.txt","r");
for(i=0;i<n;i++){
	
(fread(&t2,sizeof(struct teledir),1,fp)!=NULL)
{
printf("\t%d%s\n",t2.no,t2.name);
}}
printf("Enter number to be modified & a new number\n"); 
scanf("%d%d",&p,&newp);
fclose(fp); 
fp=fopen("td.txt","r+");
fp1=fopen("td1.txt","w"); 
for(k=0;k<n;k++){
(fread(&t2,sizeof(struct teledir),1,fp)!=NULL)
{
if(t2.no==p)
{
fseek(fp,-sizeof(struct teledir),SEEK_CUR); 
t3.no=newp;
strcpy(t3.name,t2.name); 
fwrite(&t3,sizeof(struct teledir),1,fp1);
}
else
{
fclose(fp); 
fclose(fp1);
{
fwrite(&t2,sizeof(struct teledir),1,fp1);
}
fp=fopen("td1.txt","r"); 
while(fread(&t3,sizeof(struct teledir),1,fp)!=NULL)
{
printf("\t%d\t%s\n",t3.no,t3.name);
}
fclose(fp); 
getch();
}


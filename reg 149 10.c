#include<stdio.h> 
#include<conio.h> 
void main()
{
int ans,a,b; 
printf("Enter value of a and b :"); 
scanf("%d%d",&a,&b); 
ans=gcd(a,b);
printf("n GCD of %d, %d is %d",a,b,ans); 
getch();
}
int gcd(int x, int y)
{
int t; 
while(x!=y)
{
if(x>y) 
x=x-y;
else if(x<y) 
y=y-x;
}
return x;
}


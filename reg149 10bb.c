#include<stdio.h> 
#include<conio.h>
void swap(int , int); // Declaration of function 
void main( )
{
int a = 10, b = 20 ; 
printf("\n Before swapping"); 
printf ( "\n a = %d b = %d", a, b ) ;
swap(a,b);// call by value : a and b are actual parameters 
getch();
}
void swap( int x, int y ) // x and y are formal parameters
{
int t ; t 
= x ; x 
= y ; y 
= t ;
printf("\n After swapping");
printf ( "\n a = %d b = %d", x, y ) ;
}

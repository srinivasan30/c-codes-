#include<stdio.h>
void main()
{
    signed char c;
    unsigned char a;
    short signed int x=100;
    short unsigned int y=11;
    signed int p=1500;
    unsigned int q=2000;
    long signed int m=30000;
    long unsigned int n=12000;
    float f=2.5;
    double d=35.0;
    long double l=509.2;
    printf("Size of signed char: %d",sizeof(c));
    printf("\nSize of unsigned char: %d",sizeof(a));
    printf("\nSize of short signed int: %d",sizeof(x));
    printf("\nSize of short unsigned int: %d",sizeof(y));
    printf("\nSize of signed int: %d",sizeof(p));
    printf("\nSize of unsigned int: %d",sizeof(q));
    printf("\nSize of long signed int: %d",sizeof(m));
    printf("\nSize of long unsigned int: %d",sizeof(n));
    printf("\nSize of float: %d",sizeof(f));
    printf("\nSize of double: %d",sizeof(d));
    printf("\nSize of long double: %d",sizeof(l));
}

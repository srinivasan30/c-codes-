#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
int element;
struct node *next;
} ;
typedef struct node *clist;
clist init();
clist insert(clist L,int ch, int pos);
clist delete(clist L, int pos);
clist find(clist L, int ch);
int findkth(clist L, int pos);
void printlist(clist L);
void deletelist(clist L);
clist init ()
{
clist L;
/* Create the dummy node */
L = (struct node *)malloc(sizeof(struct node));
L -&gt; element = -1;
L -&gt; next = L;
return L;
}
clist insert ( clist L , int ch , int pos )
{
int i;
clist p, n;
if (pos &lt; 0) {
printf("invalid index");
return L; }
p = L;
i = 0;
while ((i &lt; pos) &amp;&amp; (( p !=L )|| (i==0)){
p = p -&gt; next;
++i;
}
if (( p ==L )&amp;&amp;(i != 0))
{ printf("invalid index");
return L; }

n = (struct node *)malloc(sizeof(struct node));
n -&gt; element = ch;
n -&gt; next = p -&gt; next;
p -&gt; next = n;
return L;
}
clist delete ( clist L , int pos )
{
int i;
clist p, temp;
if (pos &lt; 0) {
printf("invalid index");
return L;
}
p = L;
i = 0;
while ((i &lt; pos) &amp;&amp; (p-&gt;next!=L)) { )
p = p -&gt; next;
++i;
}
if (p -&gt; next ==L) {
printf("Invalid index");
return L;
}
Temp=p -&gt;next;
p -&gt; next = temp -&gt; next;
free(temp);
return L;
}
clist find( clist L , int ch )
{
clist p;

p = L -&gt; next;
while (p !=L) {
if (p -&gt; element == ch)
return p;
p = p -&gt; next;

}
return NULL;
}
int findkth ( clist L , int pos )
{
int i;
clist p;
i = 0;
p = L -&gt; next;
while ((i &lt; pos) &amp;&amp; (p !=L)) {
p = p -&gt; next;
++i;
}
if (p ==L) {
printf("Invalid index");
return -1;
}
return p -&gt; element;
}
void printlist( clist L )
{
clist p;
p = L -&gt; next;
while (p !=L) {
printf(&quot;%d&quot;, p -&gt; element);
p = p -&gt; next;
} }
Void deletelist(clist L)
{
clist p, temp;
p=L-&gt;next;
L-&gt;next=NULL;
while(p!=L)
{temp=p;
p=p-&gt;next;
free(temp);
}

int main()
{
  llist L;
  L=init();
  int c;
  int p;
  int choice;
  do
  {
    printf("---MENU---\n");
    printf("1.INSERT ELEMENT\n");
    printf("2.DELETE ELEMENT\n");
    printf("3.SEARCH ELEMENT\n");
    printf("4.DISPLAY LIST\n");
    printf("5.DELETE LIST\n");
    printf("6.EXIT\n");
    printf("Enter your choice : \n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
             {
                 printf("Enter the position and element respectively : \n");
                 scanf("%d %d",&p,&c);
                 L=insert(L,c,p);
                 break;
             }

      case 2:
             {
                 printf("Enter the position you want to delete: \n");
                 scanf("%d",&p);
                 L=delete(L,p);
                 break;
             }
      case 3:
             {
                 printf("Enter the position of the element you want: \n");
                 scanf("%d,&p");
                 printf("Element at position %d is %d \n",p,findkth(L,p));
                 break;
             }
      case 4:
             {
                 printf("Current list is: \n");
                 printlist(L);
                 printf("\n");
                 break;
             }
      case 5:
             {
                 delete(L);
                 printf("List is deleted\n");
                 break;
             }
      case 6:
             {
                 printf("Goodbye\n");
                 break;
             }
      default:
             {
                 printf("Wrong choice\n");
                 break;
             }
    }

  }while(choice!=6);
  return 0;
}

#REG 149 Srinivasan S
#include<stdio.h>
#include<conio.h>

struct node
{
      int element;
      struct node *next;
};

typedef struct node *llist;

llist init();
llist insert(llist L,int ch, int pos);
llist delete(llist L, int pos);
llist find(llist L, int ch);

int findkth(llist L, int pos);
void printlist(llist L);
void deletelist(llist L);

llist init ()
{
  llist L;
  /* Create the dummy node */
  L = (struct node *)malloc(sizeof(struct node));
  L -> element = -1;
  L -> next = NULL;
  return L;
}

llist insert ( llist L , int ch , int pos )
{
  int i;
  llist p, n;
  if (pos < 0)
  {
    printf("invalid index");
    return L;
  }
  p = L;
  i = 0;
  while ((i < pos) &&  ( p != NULL ))
  {
    p = p -> next;
    ++i;
  }
  if (p == NULL)
  {
    printf("Invalid index");
    return L;
  }
  n = (struct node *)malloc(sizeof(struct node));
  n -> element = ch;
  n -> next = p -> next;
  p -> next = n;
  return L;
}

llist delete ( llist L , int pos )
{
  int i;
  llist p, temp;

  if (pos < 0)
  {
    printf("invalid index");
    return L;
  }
  p = L;
  i = 0;

  while ((i < pos) && (p -> next != NULL))
  {
    p = p -> next;
    ++i;
  }
  if (p -> next == NULL)
  {
    printf("Invalid index");
    return L;
  }
  temp=p ->next;
  p -> next = temp -> next;
  free(temp);
  return L;
}
llist find( llist L , int ch )
{
  llist p;

  p = L -> next;
  while (p != NULL)
  {
    if (p -> element == ch)
    return p;
    p = p -> next;
  }
  return NULL;
}

int findkth ( llist L , int pos )
{
  int i;
  llist p;

  i = 0;
  p = L -> next;
  while ((i < pos) && (p != NULL))
  {
    p = p -> next;
    ++i;
  }
  if (p == NULL)
  {
    printf("Invalid index");
    return  -1;
  }
  return p -> element;
}

void printlist( llist L )
{
  llist p;

  p = L -> next;
  while (p != NULL)
  {
    printf("%d\n", p -> element);
    p = p -> next;
  }
}

void deletelist(llist L)
{
  llist p, temp;
  p=L->next;
  L->next=NULL;
  while(p!=NULL)
  {
    temp=p;
    p=p->next;
    free(temp);
  }
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
                 deletelist(L);
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

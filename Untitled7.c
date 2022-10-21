#include <stdio.h>
#include <stdlib.h>
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
    L = (struct node *)malloc(sizeof(struct node));
    L -> element = -1;
    L -> next = L;
    return L;
}
clist insert ( clist L , int ch , int pos )
{
    int i;
    clist p, n;
    if (pos < 0) {
    printf("invalid index");
    return L; }
    p = L;
    i = 0;
    while ((i < pos) && (( p !=L )|| (i==0))){
        p = p -> next;
        ++i;
    }
    if (( p ==L )&&(i != 0)){
        printf("invalid index");
        return L; }

    n = (struct node *)malloc(sizeof(struct node));
    n -> element = ch;
    n -> next = p -> next;
    p -> next = n;
    return L;
}
clist delete ( clist L , int pos )
{
    int i;
    clist p, temp;
    if (pos < 0) {
    printf("invalid index");
    return L;
    }
    p = L;
    i = 0;
    while ((i < pos) && (p->next!=L)) {
        p = p -> next;
        ++i;
    }
    if (p -> next ==L) {
        printf("Invalid index ");
        return L;
    }
    temp=p ->next;
    p -> next = temp -> next;
    free(temp);
    return L;
}
clist find( clist L , int ch )
{
    clist p;

    p = L -> next;
    while (p !=L) {
        if (p -> element == ch)
            return p;
        p = p -> next;
    }
    return NULL;
}
int findkth ( clist L , int pos )
{
    int i;
    clist p;
    i = 0;
    p = L -> next;
    while ((i < pos) && (p !=L)) {
        p = p -> next;
        ++i;
    }
    if (p ==L) {
        printf("Invalid index ");
        return -1;
    }
    return p -> element;
}
void printlist( clist L )
{
    clist p;
    p = L -> next;
    while (p !=L) {
        printf("%d ", p -> element);
        p = p -> next;
    }
}
void deletelist(clist L)
{
    clist p, temp;
    p=L->next;
    L->next=NULL;
    while(p!=L){
        temp=p;
        p=p->next;
        free(temp);
    }
    printf("List deleted\n");

}

int main ()
{
    clist L;
    L=init();
    char c;
    int p,ch;
    int choice;
    do
    {
        printf("===MENU===\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Find position of element\n");
        printf("4.Find element\n");
        printf("5.Delete list\n");
        printf("6.Print list\n");
        printf("7.Exit\n");

        printf("Enter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: {printf("Enter the position and element respectively :-\n");
            scanf("%d %d",&p,&ch);
            L=insert(L,ch,p);
            break;}

            case 2: {printf("Enter the position you want to delete: \n");
            scanf("%d",&p);
            L=delete(L,p);
            break;}

            case 3:{ printf("Enter the position you want the element: ");
            scanf("%d",&p);
            printf("Element at position %d is %d\n",p,findkth(L,p));
            break;}

            case 4: {
            printf("Enter the element you want to find: ");
            scanf("%d",&ch);
            L= find(L,ch);
            if(L==NULL)
             printf("\nElement is not in the list\n");
            else
             printf("\nElement is present in the list\n");
            break;
            }

            case 5:{
            deletelist(L);
            break;
            }

            case 6:{
            printf("Current list is: ");
            printlist(L);
            printf("\n");
            break;}

            case 7:{printf("Goodbye\n");
            break;}
            default: {printf("Wrong Choice,enter again\n");
            break;}
        }

    }while(choice!=7);
    return 0;

}

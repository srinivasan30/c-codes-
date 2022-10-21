#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 
 struct node *prev; 
 struct node *next; 
 int data; 
}; 
struct node *head; 
void insertion();
void deletion();
void display(); 
void search(); 
void main () 
{ 
int choice =0; 
 while(choice != 9) 
 { 
 printf("\n****Main Menu****\n"); 
 printf("\nChoose one option from the following list ...\n"); 
 printf("\n===============================================\n"); 
 printf("\n1.insertion\n2.deletion\n 3.display\n4.Search\n 5.exit"); 
 printf("\nEnter your choice?\n"); 
 scanf("\n%d",&choice); 
 switch(choice) 
 { 
 case 1: 
 insertion(); 
 break; 
 case 2: 
 deletion(); 
 break; 
 case 3: 
 display(); 
 break; 
 case 4: 
 search(); 
 break;
case 5: 
 exit(0); 
 break; 
 default: 
 printf("Please enter valid choice.."); 
 } 
 } 
} 
void insertion() 
{ 
 struct node *ptr; 
 int item; 
 ptr = (struct node *)malloc(sizeof(struct node)); 
 if(ptr == NULL) 
 { 
 printf("\nOVERFLOW"); 
 } 
 else 
 { 
 printf("\nEnter Item value"); 
 scanf("%d",&item); 
 
 if(head==NULL) 
 { 
 ptr->next = NULL; 
 ptr->prev=NULL; 
 ptr->data=item; 
 head=ptr; 
 } 
 else 
 { 
 ptr->data=item; 
 ptr->prev=NULL; 
 ptr->next = head; 
 head->prev=ptr; 
 head=ptr; 
 } 
 printf("\nNode inserted\n"); 
} 
}
void deletion()
{ 
 struct node *ptr; 
 if(head == NULL) 
 { 
 printf("\n UNDERFLOW"); 
 } 
 else if(head->next == NULL) 
 { 
 head = NULL;
free(head); 
 printf("\nnode deleted\n"); 
 } 
 else 
 { 
 ptr = head; 
 head = head -> next; 
 head -> prev = NULL; 
 free(ptr); 
 printf("\nnode deleted\n"); 
 } 
 
} 
void display() 
{ 
 struct node *ptr; 
 printf("\n printing values...\n"); 
 ptr = head; 
 while(ptr != NULL) 
 { 
 printf("%d\n",ptr->data); 
 ptr=ptr->next; 
 } 
} 
void search() 
{ 
 struct node *ptr; 
 int item,i=0,flag; 
 ptr = head; 
 if(ptr == NULL) 
 { 
 printf("\nEmpty List\n"); 
 } 
 else 
 { 
 printf("\nEnter item which you want to search?\n"); 
 scanf("%d",&item); 
 while (ptr!=NULL) 
 { 
 if(ptr->data == item) 
 { 
 printf("\nitem found at location %d ",i+1); 
 flag=0; 
 break; 
 } 
 else 
 { 
 flag=1; 
 } 
 i++;
ptr = ptr -> next; 
 } 
 if(flag==1) 
 { 
 printf("\nItem not found\n"); 
 } 
 } 
}

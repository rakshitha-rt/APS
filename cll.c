#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//making the structure
struct node
{
    int data;
    struct node *next;
};
typedef struct node *Node;
Node insert(Node);
Node getnode();
Node delet(Node);
void display(Node);
void main()
{
    int choice;
    Node head=NULL;
    while(1)
    {
        printf(" \n1 for insert\n 2 for display\n 3 for delete \n 4 for exit(0)\n ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:head=insert(head);
            break;
        case 2:display(head);
            break;
        case 3:head=delet(head);
            break;
        case 4:exit(0);
            break;

        }
    }
}
Node getnode()
{
    Node newnode=malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory is not allocated");
        exit(0);
    }
    printf("Enter the data");
    scanf("%d",&newnode->data);
    newnode->next=newnode;
    return newnode;
}
Node insert(Node head)
{
    Node newnode=getnode();
    Node cur;
    if(head==NULL)
    {
      head=newnode;
        return head;
    }
   cur=head;
while(cur->next!=head)
{
    cur=cur->next;
}
cur->next=newnode;
newnode->next=head;
return head;
}
void display(Node head)
{
    if(head==NULL)
    {
        printf("List is empty");
        return ;
    }
Node temp=head;
while(temp->next!=head)
{
    printf("%d-->",temp->data);
    temp=temp->next;
}
 printf("%d-->",temp->data);
}
Node delet(Node head)
{
    Node cur,pre;
    if(head==NULL)
    {
    printf("List is empty");
    return head;
    }
    if(head->next==head)
    {
        printf("%d",head->data);
         free(head);
        head=NULL;
       return head;
    }
    cur=head;
    pre=NULL;
    while(cur->next!=head)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=head;
      free(cur);
    return head;
}




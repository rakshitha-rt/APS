#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
typedef struct node *Node;
Node getnode();
Node insertf(Node head);
Node insertb(Node head);
Node deletf(Node head);
Node deletb(Node head);
void display(Node head);
void main()
{
    int c;
    Node head=NULL;
    printf("\n1 for insert front\n 2 for insert back\n 3 for delete front\n 4 for delet back\n 5 for display\n 6 for exit\n");
    scanf("%d",&c);
    while(1)
    {
        switch(c)
        {
            case 1:head=insertf(head);
            break;
            case 2:head=insertb(head);
            break;
            case 3:head=deletf(head);
            break;
            case 4:head= deletb(head);
            break;
            case 5:display(head);
            break;
            case 6:exit(0);
            break;
        }
    }
}
Node getnode()
{
    Node newnode=malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("\nMemory is not allocated\n");
        exit(0);
    }
    else
        {
            printf("\nEnter the data\n");
    scanf("%d",&newnode->data);
        newnode->pre=newnode;
          newnode->next=newnode;
        return newnode;
        }
}
void display(Node head)
{
    if(head==NULL)
    {
        printf("\nList is empty\n");
        return NULL;
    }
    else
        {
        Node cur=head;
    while(cur->next!=head)
    {
        printf("%d-->",cur->data);
        cur=cur->next;
    }
     printf("%d-->",cur->data);
    }
}
Node insertf(Node head)
{
    Node newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    else
        {
            Node temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            newnode->next=head;
            head=newnode;
        temp->next=head;
        head->pre=temp;
        return head;
        }
}
Node insertb(Node head)
{
Node newnode=getnode();
if(head==NULL)
{
    head=newnode;
    return head;
}
else
    {
    Node cur=head;
while(cur->next!=NULL)
{
    cur=cur->next;
}
  cur->next=newnode;
  newnode->next=head;
  head->pre=newnode;
    return head;
    }
}
Node deletf(Node head)
{
    Node cur=head;
    if(head==NULL)
    {
        printf("\n List is empty \n");
        return head;
    }
    if(head->next==head)
    {
        free(head);
        head=NULL;
        return head;
    }
    else
        {
        Node temp=head;
        while(cur->next!=head)
        {
            cur=cur->next;
        }
        head=head->next;
        head->pre=cur;
        cur->next=head;
    free(temp);
        return head;
        }
}
Node deletb(Node head)
{
    if(head==NULL)
    {
        printf("\nList is empty\n");
        return head;
    }
    if(head->next==head)
    {
        free(head);
        head=NULL;
        return head;
    }
    else
        {
        Node temp=head,p=NULL;
    while(temp->next!=head)
    {
        p=temp;
        temp=temp->next;
    }
    p->next=head;
    head->pre=p;
    free(temp);
        return head;
         }
}
















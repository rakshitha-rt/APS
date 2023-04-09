#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node *next;
    struct node *pre;
};
typedef struct node *Node;
Node getnode();
Node insertf(Node);
Node insertb(Node);
Node deletf(Node);
Node deletb(Node);
void display(Node);
void main()
{
    int ch;
    Node head=NULL;
    while(1)
    {
        printf("\n1 for insert front\n 2 for insert back\n 3 for delete front\n 4 for delet back\n 5 for display\n 6 for exit\n");
        scanf("%d",&ch);
        switch(ch)
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
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("\nEnter the data part\n");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        newnode->pre=NULL;
        return newnode;
        }
}
void display(Node head)
{
    if(head==NULL)
    {
        printf("\n LIST EMPTY\n");
        return NULL;
    }
    else
    {
        Node cur=head;
        while(cur!=NULL)
        {
            printf("%d",cur->data);
            cur=cur->next;
        }
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
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
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
        newnode->pre=cur;
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
    else
    {
        Node cur=head,p=NULL;
        while(cur->next!=NULL)
        {
            p=cur;
          cur=cur->next;
        }
          p->next=NULL;
        free(cur);
        return head;
    }
}
Node deletf(Node head)
{
    if(head==NULL)
    {
        printf("\nList is empty\n");
        return head;
    }
    else
    {
      Node temp=head;
       head=head->next;
        head->pre=NULL;
          free(temp);
        return head;
    }
}








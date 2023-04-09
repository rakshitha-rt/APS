#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//making of our own data type
struct NODE
{
    int data;
    struct NODE *next;
};
typedef struct NODE *nde;
nde getNODE();
nde insert_front(nde);
void display(nde);
nde Delete(nde);
void main()
{
    int choice;
    nde head=NULL;
    while(1)
    {
        printf("1 for insert node\n 2 for display\n 3 for delete\n 4 for exit ");
        scanf("%d",&choice);
      switch(choice)
      {
    case 1: head=insert_front(head);
    break;
    case 2:display(head);
    break;
    case 3: head=Delete(head);
    break;
    case 4:exit(0);
      }
}
}

nde getNODE()
{
    int ele;
    nde Newnode;
    Newnode=malloc(sizeof(struct NODE));
    if(Newnode==NULL)
    {
        printf("Memory not allocated");
    }
    printf("Enter the data part");
    scanf("%d",&ele);
    Newnode->data=ele;
    Newnode->next=NULL;
    return Newnode;
}
nde insert_front(nde head)
{
    nde NEWNODE=getNODE();
    if(head==NULL)
    {
        head=NEWNODE;
        return NEWNODE;
    }
    else
    {
        NEWNODE->next=head;
        head=NEWNODE;
        return NEWNODE;
    }
}

void display(nde head)
{

    if(head==NULL)
       {
           printf("list is empty");
       }
       nde temp=head;
       while(temp->next!=NULL)
       {
               printf("%d-->",temp->data);
               temp=temp->next;

       }
}
nde Delete(nde head)
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    nde c;
    while(head==NULL)
    {
        c=head;
       // head=NULL;
        head=head->next;
       // free(c);
       return head;


    }

}




#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//construct a structure
struct tree
{
   int data;
    struct tree *left;
    struct tree *right;
};
typedef struct tree TREE;
TREE *insert(TREE *);
TREE *delet(TREE *);
void inorder(TREE *);
void  preorder(TREE *);
void postorder(TREE *);
void search(TREE * root);
void highest(TREE *root);
void klargest(TREE *root,int );
int main()
{
    int c,kk;
     TREE * root=NULL;
    while(1)
    {
        printf("1 for insert,2 for inorder,3 for preorder, 4 for postorder 5 for delete");
        scanf("%d",&c);
        switch(c)
        {
            case 1:root= insert(root);
            break;
            case 2 :inorder(root);
            break;
            case 3:preorder(root);
            break;
            case 4:postorder(root);
            break;
            case 5 :root=delet(root);
            break;
            case 6:search(root);
             break;
             case 7:highest(root);
             break;
             case 8:scanf("%d",&kk);
                 klargest(root,kk);
             break;
        }

    }
 return 0;
}
TREE *insert(TREE *root)
{
//memory allocation;
TREE *newnode;
newnode=(TREE*)malloc(sizeof(TREE));

if(newnode==NULL)
{
  printf("Memory not allocated");
  return root;
}
int h;
scanf("%d",&h);
newnode->data=h;
newnode->left=NULL;
newnode->right=NULL;
if(root==NULL)
{
    root=newnode;
    return newnode;
}
TREE *curr=root,*parent=NULL;
while(curr!=NULL)
{
    parent=curr;
    if(newnode->data<curr->data)
    {
        curr=curr->left;
    }
    else
        {
        curr=curr->right;
        }
}
if(newnode->data<parent->data)
    parent->left=newnode;
else
    parent->right=newnode;
    return root;

}

TREE *delet(TREE * root)
{
    int y;
    scanf("%d",&y);
    TREE * curr=root,*parent=NULL,*p,*succ;

    if(root==NULL)
    {
        printf("TREE EMPTY");
        return root;
    }
while(curr!=NULL&&curr->data!=y)
{
    parent=curr;
    if(curr->data>y)
    {
        curr=curr->left;
    }

    else
    {
        curr=curr->right;
    }
}
if(curr==NULL)
{
    printf("NOT FOUND");
    return root;
}

if(curr->right==NULL)
{
    p=curr->left;
}
else if(curr->left==NULL)
{
    p=curr->right;
}
else
    {
    succ=curr->right;
while(succ->left!=NULL)
{
    succ=succ->left;
}
succ->left=curr->left;
p=curr->right;
    }
if(parent==NULL)
{
    free(curr);
    return root;
}
if(parent->right==curr)
    parent->right=p;
else
    parent->right=p;

    free(curr);
    return root;
}
void inorder(TREE * root)
{
    if(root!=NULL)
    {
         inorder(root->left);
        printf("%d",root->data);
         inorder(root->right);
          }
}

void postorder(TREE * root)
{
if(root!=NULL)
{
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
}

void  preorder(TREE * root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
    preorder(root->left);
        preorder(root->right);
    }


}

void search(TREE * root)
{
    int y;
    scanf("%d",&y);
    if(root==NULL)
    {
        printf("EMPTY");
        return 0;
    }
    TREE * cur=root;
    while(cur!=NULL&&cur->data!=y)
    {
        if(cur->data<y)
        {
            cur=cur->right;
        }
        else
            {
            cur=cur->left;
            }
    }
    if(cur==NULL)
    {
        printf("NOT FOUND");
    }
    else
    {
        printf(" FOUND");
    }


}

void highest(TREE *root)
{
    if(root==NULL)
    {
        printf("EMPTY");
    }
    TREE * temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    printf("%d",temp->data);
}

void klargest(TREE *root,int kk)
{


}

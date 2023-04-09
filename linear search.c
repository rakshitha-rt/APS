#include<stdio.h>
void readarray(int [],int);
void printarray(int [],int);
void search(int [],int);
void main()
{
    int k,n,a[100];
    scanf("%d",&n);
    readarray(a,n);
    printarray(a,n);
    search(a,n);
}
void readarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);


    }
}
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);


    }
}
void search(int a[],int n)
{
    int k, i,flag=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=1;
        }
    }
    if(flag==1)
        printf("element found");
    else
        printf("element not found");
}

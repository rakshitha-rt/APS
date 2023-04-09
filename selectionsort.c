#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void array(int n ,int []);
void sort(int n,int []);
void print(int n,int []);
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    array(n,a);
    sort(n,a);
    print(n,a);
    return 0;
}
void array(int n ,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

}
void sort(int n,int a[n])
{
int i,j,index,v;
for(i=0;i<n-1;i++)
{
   index=i;
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[index])
        {
            index=j;
        }
    }
    int temp;
    temp=a[i];
    a[i]=a[index];
    a[index]=temp;;
}
}
void print(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

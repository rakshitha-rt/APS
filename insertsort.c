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
    int i,j,v;
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0&&v<a[j])
        {
        a[j+1]=a[j];
        j--;
        }
        a[j+1]=v;
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

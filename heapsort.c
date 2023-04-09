#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void input(int ,int arr[]);
void sort(int ,int arr[]);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    input(n,arr);
    sort(n,arr);
}
void input(int n,int arr[n])
{
    int i;
    for(i=1;i<=n;i++)
    {//using atio we will store it;
        scanf("%d",&arr[i]);
    }
}
void sort(int n,int arr[n])
{
    int m=n;
    for(int l=0;l<m;l++)
{
bool heap;
int i;
int v,k,j;
for(i=n/2;i>0;i--)
{
    k=i;
    v=arr[i];
    heap=false;
    while(heap!=true&&2*k<=n)
    {
         j=2*k;
        if(j<n)
        {
            if(arr[j+1]<arr[j])
            {
                j=j+1;
            }
        }
        if(v<arr[j])
        {
            heap=true;
        }
        else
        {
            arr[k]=arr[j];
            k=j;
        }

    }
    arr[k]=v;
}
  int temp;
  temp=arr[1];
  arr[1]=arr[n];
  arr[n]=temp;
  printf("%d",arr[n]);
  n=n-1;
}

}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    int a[5],i,s,f=0;
     for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
printf("enter the term");
scanf("%d",&s);
int low=0,high=5-1,mid=(low+high)/2;
while(low<=high)
{
if(s<mid)
{
    high=mid-1;
}
else if(s>mid)
{
   low=mid+1;
}
else if(s==mid)
{
    printf("%d",mid);
    f=1;
    break;
}
}
}

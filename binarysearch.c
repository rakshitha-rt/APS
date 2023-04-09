#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#define MAXSISE 25
void main()
{
    int i,a[5] ,s;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

printf("enter the term");
scanf("%d",&s);
for(i=0;i<5;i++)
{
    if(s==a[i])
    {
       printf("%d",i);
   break;
    }
}
}




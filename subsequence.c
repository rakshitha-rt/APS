#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    char s1[100];
    char s2[100];
    int a[100][100];
    scanf("%s %s",s1,s2);
    int i,j;
    for(i=0;i<strlen(s1);i++)
    {
        for(j=0;j<strlen(s2);j++)
        {
            a[i][0]=0;
            a[0][j]=0;

        }
    }

    for(i=1;i<=strlen(s1);i++)
    {
        for(j=1;j<=strlen(s2);j++)
        {
          if(s1[i-1]==s2[j-1])
          {
              a[i][j]=a[i-1][j-1]+1;
          }
          else
          {
              a[i][j]=max(a[i-1][j],a[i][j-1]);
          }

        }
    }
     /*for(i=0;i<=strlen(s1);i++)
    {
        for(j=0;j<=strlen(s2);j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
*/
    printf("%d",a[strlen(s1)][strlen(s2)]);
    return 0;
}

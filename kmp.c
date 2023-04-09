#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
#define VNAME 100
typedef struct DT
{
    int day,month,year;
}DT;

typedef struct fix
{
   struct DT FDT;
    char fname[100];
    float tm;
    char am_pm[2];
    char opponent[30];
    char mat_type[10];
    int mat_no;
    char std[50];
    struct fix *next;
    struct fix *prev;
}FIX;
 typedef FIX * NODE2;
void solve(char p[MAX],NODE2 head);

int main()
{
    NODE2 head;
    char p[MAX];
   scanf("%s",p);
   solve(p,head);
   return 0;
}
void solve(char p[MAX],NODE2 head)
{
    char t[MAX];
    NODE2 cur=head;
    int i,psum=0,j=0,tsum=0,l,c=0,ps=strlen(p),ts=strlen(t);
    while(cur!=head)
    {
  strcpy(t,cur->fname);
    for(i=0;i<ps;i++)
    {
        int k=p[i];
        psum=psum+k;
    }
    while(j<ts)
    {
        for(i=j;i<j+ps;i++)
        {
        int k=t[i];
        tsum=tsum+k;
        }
        if(tsum==psum)
        {
            for(l=0;l<ps;l++)
            {
                if(p[l]==t[j+l])
                {
                    c++;
                }
            }
            if(c==ps)
            {
 printf("%")
            }
        }
        else
        {
            tsum=0;
            j++;
        }
    }

}
}

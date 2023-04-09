#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
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
}FIX;
FIX FIXT[25];
void read();
void solve(char p[MAX]);
int main()
{
    read();
    char p[MAX];
  scanf("%s",p);
    solve(p);
}
void read()
{
    for(int C3=0;C3<15;C3++)
    {
         scanf("%s %d %d %d %f %s %s %s %d %s",FIXT[C3].fname,&FIXT[C3].FDT.day,
          &FIXT[C3].FDT.month,&FIXT[C3].FDT.year,&FIXT[C3].tm,FIXT[C3].am_pm,FIXT[C3].opponent,
          FIXT[C3].mat_type,&FIXT[C3].mat_no,FIXT[C3].std);
    }
}
void solve(char p[MAX])
{
    char t[MAX];
    int i,l,ps=strlen(p),ts=strlen(t),psum=0;
      for(i=0;i<ps;i++)
    {
        int k=p[i];
        psum=psum+k;
    }
   for(int y=0;y<15;y++)
    {
        int tsum=0,j=0,c=0;
  strcpy(t,FIXT[y].fname);

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
printf("%s %d %d %d %f %s %s %s %d %s\n",FIXT[y].fname,FIXT[y].FDT.day,
          FIXT[y].FDT.month,FIXT[y].FDT.year,FIXT[y].tm,FIXT[y].am_pm,FIXT[y].opponent,
          FIXT[y].mat_type,FIXT[y].mat_no,FIXT[y].std);            }
        }
        else
        {
            tsum=0;
            j++;
        }
    }

}
}


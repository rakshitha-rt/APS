#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define SIZE 50000
#define N 1000000
void search(int []);
int main()
{
    int i,a[SIZE];
    for(i=0;i<SIZE;i++)
    {
        a[i]=rand();
    }
    int j;
      clock_t start ,end;
        start=clock();
    for(j=0;j<N;j++)
    {
        search(a);
    }


    end=clock();
    double duration;
    duration=(end-start)/CLOCKS_PER_SEC;;
    printf("%\n %g\n",duration/N);
    return 0;
}
void search(int a[SIZE])
{
    int c,i,j;
  c=19778;
    for(i=0;i<SIZE;i++)
    {
        if(a[i]==c)
        {
         j=1;
            break;
        }
    }
    if(j!=1)
    {
    }

}

#include<stdio.h>
#include<stdlib.h>
void tower_of_hanoi(int,char,char,char);
int main()
{
    int N=3;
    char a,b,c;
     tower_of_hanoi(N,'a','c','b');
     return 0;
}
void tower_of_hanoi(int N,char from,char to,char aux)
{

if(N==1)
{
    printf("move the disk from %c to %c",from ,to);
    return 0;
}

tower_of_hanoi(N-1,from,aux,to);
printf("\nmove the disk from %c to %c\n",from,to);
tower_of_hanoi(N-1,aux,to,from);

}

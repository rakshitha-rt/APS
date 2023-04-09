#include<stdio.h>
void readarray(int[],int);
void printarray(int[],int);
void bubblesort(int[],int);
void main()
{
int N,a[100];
scanf("%d",&N);
readarray(a,N);
printarray(a,N);
bubble_sort(a,N);
printf("\n after bubble_sort\n");
printarray(a,N);
}
void readarray(int a[],int N)
{
    printf("Enter the values for array\n");
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
}
void printarray(int a[], int N)
{
     int i;
    //printf("array values\n",a);

    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
}
void bubble_sort(int a[],int N)
{

int i,j,temp;
for(i=0;i<N-1;i++)
{
    for(j=0;j<N-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

        }
    }
}

}

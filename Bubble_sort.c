#include<stdio.h>
int i;
int main()
{
int A[]={34,15,25,8,9,5,10,12};
bubble_sort(A,8);
for(i=0;i<=7;i++)
printf(" %d ", A[i]);
}
void bubble_sort(int A[],int N)
{
int round,temp,flag;
for(round=1;round<=N-1;round++)
{
    flag=0;
    for(i=0;i<=N-1-round;i++)
    if(A[i]>A[i+1])
    {
    flag=1;
    temp=A[i];
    A[i]=A[i+1];
    A[i+1]=temp;
    }
    if(flag==0)
    {
      printf("round=%d\n",round);
      return;
    }
    }
}


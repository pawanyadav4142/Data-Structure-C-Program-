#include<stdio.h>
#include<conio.h>
int min(int A[],int k,int N)
{
    int LOC,MIN,j;
    MIN=A[k];
    LOC=k;
    for(int j=k+1;j<=N-1;j++)
            if(MIN>A[j])
    {
    MIN=A[j];
    LOC=j;

    }
   return(LOC);
}

int main()
{
    int A[]={1,1,1,1,1,1,1,1,1};
    int LOC,k,temp;
    for(k=0;k<=7;k++)
    {
    LOC=min(A,k,9);
    temp=A[k];
    A[k]=A[LOC];
    A[LOC]=temp;
    }
    for(k=0;k<=8;k++)
        printf(" %d ",A[k]);
    getch();
}

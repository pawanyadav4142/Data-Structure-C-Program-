#include<stdio.h>
#include<conio.h>
void seq_search(int L[],int N, int ITEM)
{
    int k,flag=1;
    for(k=0;k<=N-1;k++)
    {
        if(L[k]==ITEM)
        {
        flag=0;
        printf("search successful\n At =%d",k);
        }
    }
    if(flag==1)
        printf("search unsuccessful");
}

void main()
{
    int value;
    int A[]={22,44,11,77,88,55,99,33,66,1,100};
    printf("Enter value to search\n");
    scanf("%d",&value);
    seq_search(A,11,value);

}

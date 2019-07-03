#include<stdio.h>
#include<conio.h>
void bin_search(int L[],int N,int item);
main()
{
    int A[]={3,11,12,25,35,47,54,56,66,77,89,90};
    int item=77;
    bin_search(A,12,item);
}

void bin_search(int L[],int N,int item)
{
    int l=0,u=N-1,m;
    while(u>=l)
    {
    m=(u+l)/2;
    if(item==L[m])
    {
       printf("Search successfull , at Index of %d",m);
       return;
    }
    else if(item>L[m])
    {
        l=m+1;
    }
    else
        u=m-1;
    }
printf("Search Unsuccessful");
}

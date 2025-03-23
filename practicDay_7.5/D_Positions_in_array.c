#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<setjmp.h>
#include<string.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    int pos=0;
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    for(int i=0;i<n;i++)
    {
        if(a[i]<=10)
        { printf("A[%d] = %d\n",i,a[i]); }
    }
    // for(int i=0;i<n;i++)
    // { printf("A[%d]= %d\n",i,pos);}
    return 0;
}
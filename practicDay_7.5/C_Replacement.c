#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<setjmp.h>
#include<string.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        { a[i]=1; }
        else if(a[i]<0)
        { a[i]=2; }
    }
    for(int i=0;i<n;i++)
    { printf("%d ",a[i]); }
    return 0;
}
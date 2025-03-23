#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<setjmp.h>
#include<string.h>
#include<limits.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    int mn=2147483647,pos=-1;
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    for(int i=0;i<n;i++)
    {
        if(a[i]<mn)
        { mn=a[i];pos=i; }
    }
    printf("%d %d",mn,1+pos);
    return 0;
}
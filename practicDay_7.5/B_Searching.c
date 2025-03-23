#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<setjmp.h>
#include<string.h>
int main()
{
    long long int n;scanf("%lld",&n);
    long long int a[n];
    
    for(int i=0;i<n;i++)
    { scanf("%lld",&a[i]); }

    long long int x,idx=-1;scanf("%lld",&x);
    
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        { idx=i;break;}
    }
    printf("%d",idx);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int main()
{
    int t;scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n;scanf("%d",&n);
        for(int i=1;i<=n;i++)
        { printf("%d ",i); }
        for(int j=n-1;j>=1;j--)
        { printf("%d ",j); }
        printf("\n");
    }
    return 0;
}
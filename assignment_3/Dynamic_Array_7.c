#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int n;scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        int x;scanf("%d",&x);
        a=(int*)realloc(a,n*sizeof(int));
        a[i]=x;
    }
    for(int i=0;i<n;i++)
    { printf("%d ",a[i]); }

    return 0;
}
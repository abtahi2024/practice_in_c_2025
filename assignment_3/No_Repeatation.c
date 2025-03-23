#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    int frq[100005]={0},cnt=0;
    for(int i=0;i<n;i++)
    { frq[a[i]]++; }

    for(int i=0;i<100005;i++)
    {
        if(frq[i]==1)
        { cnt++; }
    }
    // for(int i=0;i<n;i++)
    // {
    //     bool flag=true;
    //     for(int j=0;j<n;j++)
    //     if(i!=j&&a[i]==a[j])
    //     { flag=false; break; }
    //     if(flag)
    //     { cnt++; }
    // }
    printf("%d",cnt);

    return 0;
}
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    bool ok=true;
    int l=0,r=n-1;
    while(l<r)
    {
        if(a[l]!=a[r])
        { ok=false; break; }
        l++; r--;
    }
    if(ok)
    { printf("YES"); }
    else
    { printf("NO"); }
    return 0;
}
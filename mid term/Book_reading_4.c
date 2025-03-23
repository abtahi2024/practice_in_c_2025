#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,t;scanf("%d %d",&n,&t);
    int cnt=0,times=0;
    for(int i=0;i<n;i++)
    {
        int x;scanf("%d",&x);
        times+=x;
        if(times<=t)
        { cnt++; }
    }
    // int a[n];
    // for(int i=0;i<n;i++)
    // { scanf("%d",&a[i]); }
    // for(int i=0;i<n;i++)
    // {
    //     times+=a[i];
    //     if(times<=t)
    //     { cnt++; }
    // }
    printf("%d",cnt); 
    return 0;
}

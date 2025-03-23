#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d", &a[i]); }

    int x;scanf("%d",&x);
    a[x-1]=1-a[x-1];
    
    for(int i=0;i<n;i++)
    { printf("%d ",a[i]); }
    
    return 0;
}

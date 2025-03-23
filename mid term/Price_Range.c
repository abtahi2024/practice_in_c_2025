#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,x,y,pi;scanf("%d %d %d",&n,&x,&y);
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&pi);
        if(pi>=x&&pi<=y)
        { cnt++; }
    }
    printf("%d",cnt);
    return 0;
}

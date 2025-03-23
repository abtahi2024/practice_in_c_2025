#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;scanf("%d",&n);
    int one=0,zero=0;
    for(int i=0;i<n;i++)
    {
        int x;scanf("%d",&x);
        if(x==1)
        { one++; }
        else if(x==0)
        { zero++; }
    }
    printf("%d %d",zero,one);
    return 0;
}

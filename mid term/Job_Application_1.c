#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int exp;scanf("%d",&exp);
        if(exp<1)
        { printf("Entry-level candidate\n"); }
        else if(exp<=3)
        { printf("Junior candidate\n"); }
        else if(exp<=7)
        { printf("Mid-level candidate\n"); }
        else
        { printf("Senior candidate\n"); }
    }
    return 0;
}

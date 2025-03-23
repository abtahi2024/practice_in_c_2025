#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[1005],b[1005],c[1005];scanf("%s %s %s",a,b,c);
    char mn[1005],mx[1005];
    strcpy(mn,a);
    if(strcmp(b,mn)<0)
    { strcpy(mn,b); }
    if(strcmp(c,mn)<0)
    { strcpy(mn,c); }

    strcpy(mx,a);
    if(strcmp(b,mx)>0)
    { strcpy(mx,b); }
    if(strcmp(c,mx)>0)
    { strcpy(mx,c); }
    printf("%s\n%s",mn,mx);
    return 0;
}

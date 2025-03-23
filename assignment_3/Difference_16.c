#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int a,b;scanf("%d %d",&a,&b);
    int *p1=&a,*p2=&b;
    int diff;
    if(*p1>*p2)
    { diff=*p1-*p2; }
    else
    { diff=*p2-*p1; }
    printf("%d",diff); 

    return 0;
}
#include<stdio.h>
int main()
{
    int x,y;scanf("%d %d",&x,&y);
    int *a=&x,*b=&y;
    // if(*a>*b)
    // {
    // }
        int tmp=*a;
        *a=*b;
        *b=tmp;
    printf("%d %d",*a,*b);
}
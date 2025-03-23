#include<stdio.h>
int main()
{
    int x,y;scanf("%d %d",&x,&y);
    int *p=&x,*q=&y;
    printf("%d",*p+*q);
}
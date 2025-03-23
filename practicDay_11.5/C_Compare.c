#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100];scanf("%s %s",x,y);
    if(strcmp(x,y)<0)
    { printf("%s",x); }
    else
    { printf("%s",y);}
}
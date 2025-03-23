#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int add(int x,int y)
{
    int Add=x+y;
    return Add;
}
int main()
{
    int x,y;scanf("%d %d",&x,&y);
    printf("%d",add(x,y));
    return 0;
}
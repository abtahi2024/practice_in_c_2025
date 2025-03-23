#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int recursion(int n)
{
    if(n==0){ return 0; }
    printf("I love Recursion\n");
    return recursion(n-1);
}
int main()
{
    int n;scanf("%d",&n);
    recursion(n);
    return 0;
}
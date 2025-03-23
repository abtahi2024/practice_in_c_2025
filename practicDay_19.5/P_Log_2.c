#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
long long int Log2(long long int n)
{
    if(n<=1){ return 0;}
    else { return 1+Log2(n/2); }
}
int main()
{
    long long int n;scanf("%lld",&n);
    printf("%lld",Log2(n));
    return 0;
}
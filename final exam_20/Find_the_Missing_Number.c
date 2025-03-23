#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int main()
{
    long long int t;scanf("%lld",&t);
    for(int i=0;i<t;i++)
    {
        long long int m,a,b,c;scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        
        long long int find=(a*b*c),miss=m/(a*b*c);

        if(m%find==0)
        { printf("%lld\n",miss); }
        else
        { printf("-1\n"); }
    }
    return 0;
}
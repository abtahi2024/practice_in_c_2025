#include<stdio.h>
int main()
{
    char n;scanf("%c",&n);
    if(n=='z')
    { printf("a"); }
    else if(n>='a'&&n<='z')
    { printf("%c",n+1); }

    return 0;
}
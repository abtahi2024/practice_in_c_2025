#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int n=1005;
int main()
{
    char s[n];scanf("%[^\n]s",&s);
    bool ok=1;
    for(int i=0;i<strlen(s)/2;i++)
    {
        if(s[i]!=s[strlen(s)-i-1])
        { ok=0; break;}
    }
    if(ok)
    { printf("YES"); }
    else
    { printf("NO"); }
    return 0;

}
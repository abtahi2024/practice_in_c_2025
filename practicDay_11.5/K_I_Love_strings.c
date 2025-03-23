#include<stdio.h>
#include<string.h>
int main()
{
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char s[10001],t[10001];scanf("%s %s",&s,&t);
        int j=0;
        while(j<strlen(s)||j<strlen(t))
        {
            if(j<strlen(s))
            { printf("%c",s[j]); }
            if(j<strlen(t))
            { printf("%c",t[j]); }
            j++;
        }
        printf("\n");
    }
    return 0;
}
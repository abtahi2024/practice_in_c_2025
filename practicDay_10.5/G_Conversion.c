#include<stdio.h>
#include<string.h>
int main()
{
    char s[100005];scanf("%[^\n]s",&s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]==',')
        { s[i]=' ';}
        else if(s[i]>='A'&&s[i]<='Z')
        { s[i]+=32; }
        else if(s[i]>='a'&&s[i]<='z')
        { s[i]-=32; }
    }
    printf("%s",s);
    return 0;

}
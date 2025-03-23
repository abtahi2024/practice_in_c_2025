#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100004],equl[]="hello";scanf("%s",&a);
    int i=0,j=0,cnt=0;
    while(i<strlen(a))
    {
        if(a[i]==equl[j])
        { cnt++; j++; }
        i++;
        
    }
    if(cnt==5)     
    { printf("YES"); }
    else
    { printf("NO"); }
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[111],b[111];scanf("%s %s",&a,&b);
    printf("%d %d\n",strlen(a),strlen(b));
    printf("%s%s\n",a,b);
    char tmp=a[0];
    a[0]=b[0];
    b[0]=tmp;
    
    printf("%s %s",a,b);
}
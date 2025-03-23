#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
int main()
{
    char s1[105],s2[105],s3[105];scanf("%s %s %s",s1,s2,s3);
    int ans=0;
    for(int i=0;i<strlen(s1);i++)
    {
        int fqr[26]={0};
        fqr[s1[i]-'a']++;
        fqr[s2[i]-'a']++;
        fqr[s3[i]-'a']++;
        int mx=0; 
        for(int j=0;j<26;j++)
        {
            if(fqr[j]>mx)
            { mx=fqr[j]; }
        }
        ans+=3-mx;
    }
    printf("%d",ans);
    return 0;
}

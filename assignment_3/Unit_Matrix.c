#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { scanf("%d",&a[i][j]); }
    }
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=1)
                { flag=false; break;}
            }
            else
            {
                if(a[i][j]!=0)
                { flag=false; break; }
            }
        }
    }
    if(flag)
    { printf("YES"); }
    else
    { printf("NO"); }

}
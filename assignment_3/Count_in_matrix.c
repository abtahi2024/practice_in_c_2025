#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int n,m,x;scanf("%d %d %d",&n,&m,&x);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        { scanf("%d",&a[i][j]); }
    }
    
    for(int i=0;i<x;i++)
    {
        int val;scanf("%d",&val);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]==val)
                { cnt++; }
            }
        }
        printf("%d\n",cnt); 

    }
    return 0;
}
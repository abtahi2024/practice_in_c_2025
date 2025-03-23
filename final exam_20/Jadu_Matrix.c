#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int main()
{
    int n,m;scanf("%d %d",&n,&m);
    int a[n][m];
    if(n!=m)
    { printf("NO"); return 0;}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        { scanf("%d",&a[i][j]); }
    }
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j&&a[i][j]!=1)
            { flag=false; }
            else if(i+j==n-1&&a[i][j]!=1)
            { flag=false; }
            else if(i!=j&i+j!=n-1&&a[i][j]!=0)
            { flag=false; }
        }
    }
    if(flag)
    { printf("YES"); }
    else
    { printf("NO"); } 
    return 0;
}
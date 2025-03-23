#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int main()
{
    int n,m;scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        { scanf("%d",&a[i][j]); }
    }
    for(int i=0;i<n;i++)
    {
        int tmp=a[i][0];
        a[i][0]=a[i][m-1];
        a[i][m-1]=tmp;
    }
    for(int j=0;j<m;j++)
    {
        int tmp=a[0][j];
        a[0][j]=a[n-1][j];
        a[n-1][j]=tmp;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        { printf("%d ",a[i][j]); }
        printf("\n"); 
    }
    return 0;
}
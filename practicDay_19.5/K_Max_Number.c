#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int num(int a[],int n)
{
    if(n==1){ return a[0]; }
    int mx=num(a+1,n-1);
    if(a[0]>mx)
    { mx=a[0]; }
    // return a[0]>mx?a[0]:mx;
    return mx;
}
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    printf("%d",num(a,n));
    return 0;
}
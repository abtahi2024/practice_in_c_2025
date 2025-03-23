#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
    
void maxmin(int a[],int n,int *mx,int *mn)
{
    *mn=a[0];*mx=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<*mn)
        { *mn=a[i]; }
        else if(a[i]>*mx)
        { *mx=a[i]; }
    }

}
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    int mx,mn;
    maxmin(a,n,&mx,&mn);
    printf("%d %d",mn,mx);
    return 0;
}
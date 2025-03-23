#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
void shift(int a[],int n)
{
    int i=0,j=0;
    while(j<n)
    {
        if(a[j]!=0)
        {
            int tmp=a[i];
            a[i]=a[j];
            a[j]=tmp;
            i++;
        }
        j++;
    }
}
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    shift(a,n);
    for(int i=0;i<n;i++)
    { printf("%d ",a[i]); }
    return 0;
}
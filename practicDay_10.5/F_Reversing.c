#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    int j=n-1;
    for(int i=0;i<j;i++)
    {
        int tmp=a[i];
        a[i]=a[j];
        a[j]=tmp;
        j--;
    }
    int val=0;
    while(val<n)
    { printf("%d ",a[val]); val++;}
}
#include <stdio.h>
int n,i,f=0,t=0;
int main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    int l=0,a[n],s=0;
    for(i=1;i<=n;i++)
    {
        printf("enter %d number :",i);
        scanf("%d",&l);
        a[i-1]=l;
    }
    for(int h=0;h<n;h+=t)
    {
       s+=a[h];
       t++;
    }

    printf("sum = %d\n",s);
}
#include <stdio.h>
int n;
int main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    int l=0,a[n],s=0;
    for(int i=1;i<=n;i++)
    {
        printf("enter %d number :",i);
        scanf("%d",&l);
        a[i-1]=l;
    }
    for(int i=1;i<n;i++)
    {
        s+=a[i-1]*a[i];
    }

    printf("sum = %d\n",s);
}
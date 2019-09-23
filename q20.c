#include <stdio.h>
int n,i,f=0,k;
int main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the value of k");
    scanf("%d",&k);
    int l=0,a[n],s=0;
    for(i=1;i<=n;i++)
    {
        printf("enter %d number :",i);
        scanf("%d",&l);
        a[i-1]=l;
    }
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0)
        f++;
        if(f==k)
        break;
    }
    for(int h=i+1;h<n;h++)
    {
       s+=a[h];
    }

    printf("sum = %d\n",s);
}
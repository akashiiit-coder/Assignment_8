#include <stdio.h>
int n,i,f=0;
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
    for(i=0;i<n;i++)
    {
        if (a[i]%2==0 && a[i+1]%2==0)
        
        break;
    }
    for(int h=i+2;h<n;h++)
    {
       s+=a[h];
    }

    printf("sum = %d\n",s);
}
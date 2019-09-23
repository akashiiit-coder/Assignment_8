#include <stdio.h>
int n;
int main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    int l=0,s=0;
    for(int i=1;i<=n;i++)
    {
        printf("enter %d number :",i);
        scanf("%d",&l);
        if (l>30 && l<90 )
        s+=l;
    }
    printf("sum of numbers between 30 and 90 is = %d\n",s);
}
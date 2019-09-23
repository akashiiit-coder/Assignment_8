#include <stdio.h>
int n,x,y;
int main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    int l=0,s=0;
    for(int i=1;i<=n;i++)
    {
        printf("enter %d number :",i);
        scanf("%d",&l);
        x=l%10;
        l=l/10;
        y=l%10;
        l=l/10;
        s+=(l*100+10*x+y);
    }
    printf("sum of numbers after exchanging last digits = %d\n",s);
}
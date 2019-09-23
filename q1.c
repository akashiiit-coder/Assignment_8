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
        s+=(l%10);
    }
    printf("sum of last digits = %d\n",s);
}
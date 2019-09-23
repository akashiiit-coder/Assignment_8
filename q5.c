#include <stdio.h>
int n;
int main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    int l=0,s=0,p=1;
    for(int i=1;i<=n;i++)
    {
        printf("enter %d number :",i);
        scanf("%d",&l);
        p=p * ( l%10 * ( (l/10) % 10 ));
        s+=p; 
        p=1;
    }
    printf("sum of products last two digits = %d\n",s);
}
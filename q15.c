#include <stdio.h>
int n;
int main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    int l=0,s=0,k=0;
    for(int i=1;i<=n;i++)
    {
        printf("enter %d number :",i);
        scanf("%d",&l);
        if (l%2==0)
        {s+=i*l;
        k+=i;
        }
    }
    printf("sum = %lf\n",(double)s/k);
}
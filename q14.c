#include <stdio.h>
int n;
int main()
{
    printf("enter the value of n");
    scanf("%d",&n);
    int l=0,s=0,x,y,sm,lg;
    for(int i=1;i<=n;i++)
    {
        printf("enter %d number :",i);
        scanf("%d",&l);
        x=l%10;
        l=l/10;
        y=l%10;
        l=l/10;
        lg=x>y?x:y;
        sm=x+y-lg;
        s+=l*100+sm*10+lg;
    }
    printf("sum = %d\n",s);
}
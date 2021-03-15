#include <stdio.h>
int main ()
{
    int n,q,a,i;
    scanf("%d",&n);
    int Q[n],A[n];
    scanf("%d %d",&q,&a);
    for(i=n-1;i>=0;i--)
    {
        Q[i]=q%10;
        A[i]=a%10;
        q/=10;
        a/=10;
    }
    return 0;
}

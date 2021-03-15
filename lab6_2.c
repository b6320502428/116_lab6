#include <stdio.h>
int main ()
{
    int n,q,a,i,cor=0;
    scanf("%d",&n);
    int Q[n],A[n],wor=n;
    scanf("%d %d",&q,&a);
    for(i=n-1;i>=0;i--)
    {
        Q[i]=q%10;
        A[i]=a%10;
        q/=10;
        a/=10;
    }
    for(i=0;i<n;i++)
    {
        if(Q[i]==A[i])
        {
            cor++;
            wor--;
        }
    }
    printf("%d %d",cor,wor);
    return 0;
}

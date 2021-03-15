#include <stdio.h>
int main ()
{
    int N,Q,j;
    scanf("%d %d",&N,&Q);
    int array[N],i,Z,A,B;
    char op[2];
    for(j=0;j<N;j++)
    {
        array[j]=0;
    }
    for(j=0;j<Q;j++)
    {
        scanf("%s",op);
        if(op[0]=='U')
        {
            scanf("%d %d",i,Z);
        }
    }
    return 0;
}

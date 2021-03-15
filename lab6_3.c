#include <stdio.h>
int main ()
{
    int N,Q,j,max,k,i,A,B;
    scanf("%d %d",&N,&Q);
    long long int array[N],Z;
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
            scanf("%d %lld",&i,&Z);
            array[i-1]=Z;
        }
        else if(op[0]=='P')
        {
            scanf("%d %d",&A,&B);
            max=array[A-1];
            for(k=A;k<=B-1;k++)
            {
                if(max<array[k])
                {
                    max=array[k];
                }
            }
            printf("%d\n",max);
        }
    }
    /*for(j=0;j<N;j++)
    {
        printf("%d ",array[j]);
    }*/
    return 0;
}

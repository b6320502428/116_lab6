#include <stdio.h>
int main ()
{
    int N,Q,j,max,k;
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
            array[i]=Z;
        }
        else if(op[0]=='P')
        {
            scanf("%d %d",A,B);
            max=array[A];
            for(k=A+1;k<=B;k++)
            {
                if(max<array[k])
                {
                    max=array[k];
                }
            }
            printf("%d\n",max);
        }
    }
    return 0;
}

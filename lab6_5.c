#include <stdio.h>
int main ()
{
    int w,h,i,j,t=0;
    scanf("%d %d",&w,&h);
    int n[h][w];
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            scanf("%d",&n[i][j]);
            t+=n[i][j];
        }
    }
    return 0;
}

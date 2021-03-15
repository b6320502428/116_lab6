#include <stdio.h>
int main ()
{
    int w,h,i,j,t=0,ans;
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
    if(t%(w*h)>(w*h)/2)
    {
        ans=(w*h)-t%(w*h);
    }
    return 0;
}

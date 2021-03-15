#include <stdio.h>
int main ()
{
    int w,h,i,j,t=0,tmp;
    scanf("%d %d",&w,&h);
    for(i=0; i<h; i++)
    {
        for(j=0; j<w; j++)
        {
            scanf("%d",&tmp);
            t+=tmp;
        }
    }
    if(t%(w*h)>(w*h)/2)
    {
        printf("%d",(w*h)-t%(w*h));
    }
    else
    {
        printf("%d",t%(w*h));
    }
    return 0;
}

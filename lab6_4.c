#include <stdio.h>
int main ()
{
    int n,i,max,win1=0,win2;
    scanf("%d",&n);
    int num[n][2],score[n];
    for(i=0;i<n;i++)
    {
        score[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&num[i][0],&num[i][1]);
        score[num[i][0]]++;
        score[num[i][1]]++;
    }
    max=score[0];
    for(i=1;i<n;i++)
    {
        if(max<score[i])
        {
            max=score[i];
            win1=i;
        }
    }
    return 0;
}

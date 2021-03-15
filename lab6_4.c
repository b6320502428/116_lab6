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
    if(score[num[win1][0]]<score[num[win1][1]])
    {
        win2=num[win1][0];
    }
    else if(score[num[win1][0]]>score[num[win1][1]])
    {
        win2=num[win1][1];
    }
    else
    {
        if(num[win1][0]<num[win1][1])
        {
            win2=num[win1][0];
        }
        else
        {
            win2=num[win1][1];
        }
    }
    printf("%d %d",win1,win2);
    return 0;
}

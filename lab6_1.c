#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    char str[n][1001],tmp[1001];
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        if(str[i][0]>96&&str[i][0]<123)
        {
            str[i][0]-=32;
        }
    }
    return 0;
}

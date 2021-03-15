#include <stdio.h>
int main ()
{
    int n,i;
    scanf("%d",&n);
    char str[n][1001];
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    return 0;
}

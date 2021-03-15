#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j;
    char op[251];
    scanf("%d",&n);
    char array[n][n];
    scanf("%s",op);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            array[i][j]='.';
        }
    }
    for(i=0; i<strlen(op); i++)
    {

    }
    return 0;
}

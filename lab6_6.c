#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j,k;
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
    j=0;
    k=0;
    for(i=0; i<strlen(op); i++)
    {
        if(op[i]=='U')
        {
            if(j>0)
            {
                if(array[j][k]=='.')
                {
                    array[j][k]='|';
                }
                else if(array[j][k]=='-')
                {
                    array[j][k]='+';
                }
                j--;
            }
        }
        else if(op[i]=='D')
        {
            if(j<n-1)
            {
                if(array[j][k]=='.')
                {
                    array[j][k]='|';
                }
                else if(array[j][k]=='-')
                {
                    array[j][k]='+';
                }
                j++;
            }
        }
        else if(op[i]=='L')
        {
            if(k>0)
            {
                if(array[j][k]=='.')
                {
                    array[j][k]='-';
                }
                else if(array[j][k]=='|')
                {
                    array[j][k]='+';
                }
                k--;;
            }
        }
        else if(op[i]=='R')
        {
            if(k<n-1)
            {
                if(array[j][k]=='.')
                {
                    array[j][k]='-';
                }
                else if(array[j][k]=='|')
                {
                    array[j][k]='+';
                }
                k++;;
            }
        }
    }
    return 0;
}

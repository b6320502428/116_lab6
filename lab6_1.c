#include <stdio.h>
#include <string.h>
int main ()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    char str[n][1001],tmp[1001];
    int re[n];
    for(i=0; i<n; i++)
    {
        scanf("%s",str[i]);
        re[i]=0;
        if(str[i][0]>96&&str[i][0]<123)
        {
            str[i][0]-=32;
            re[i]++;
        }
    }
    for(j=1; j<n; j++)
    {
        for(i=0; i<j; i++)
        {
            if(str[j][0]<str[i][0])
            {
                strcpy(tmp,str[j]);
                for(k=j; k>i; k--)
                {
                    strcpy(str[k],str[k-1]);
                }
                strcpy(str[k],tmp);
            }
        }
    }
    /*for(l=0; l<5; l++)
    {
        for(j=1; j<n; j++)
        {
            for(i=0; i<j; i++)
            {
                if(str[j][l-1]==str[i][l-1])
                {
                    if(str[j][l]<str[i][l])
                    {
                        strcpy(tmp,str[j]);
                        for(k=j; k>i; k--)
                        {
                            strcpy(str[k],str[k-1]);
                        }
                        strcpy(str[k],tmp);
                    }
                }
            }
        }
    }*/
    for(i=0; i<n; i++)
    {
        if(re[i]==1)
        {
            str[i][0]+=32;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}

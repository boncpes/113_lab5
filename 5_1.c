#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int c[n]={0};
    char w[n];
    char *pch;
    scanf(" %[^\n]s",w);
    pch = strtok(w," ");
    i=0;
    while(pch != NULL )
    {
        if(!(strcmp(pch,"+")))
        {
            b[i-2]+=b[i-1];

        }
        else if(!(strcmp(num,"-")))
        {

        }
        else if(!(strcmp(num,"*")))
        {

        }
        else
        {
            c[i]=atoi(pch);
            i++;
        }
        pch = strtok(NULL," ");
    }
    return 0;
}

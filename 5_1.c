#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int c[10]={0};
    char w[n];
    char *pch;
    scanf(" %[^\n]s",w);
    pch = strtok(w," ");
    i=0;
    while(pch != NULL )
    {
        if(!(strcmp(pch,"+")))
        {
            c[i-2]+=c[i-1];
            i--;
        }
        else if(!(strcmp(pch,"-")))
        {
            c[i-2]-=c[i-1];
            i--;
        }
        else if(!(strcmp(pch,"*")))
        {
            c[i-2]*=c[i-1];
            i--;
        }
        else
        {
            c[i]=atoi(pch);
            i++;
        }
        pch = strtok(NULL," ");
    }
    printf("%d",c[0]);
    return 0;
}

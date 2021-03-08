#include<stdio.h>
int check(int t)
{
    while(t!=1)
    {
        if(t%2==0)
        {
            t=t/2;
        }
        else if(t%3==0)
        {
            t=t/3;
        }
        else if(t%5==0)
        {
            t=t/5;
        }
        else
        {
            return 1;
            break;
        }
    }
    return 0;
}
int main()
{
    int n,i,j,k,t,c;
    scanf("%d",&n);
    int u[10000]={0};
    u[0]=1;
    t=1;
    for(j=2; j<n*n*2; j++)
    {
        c=check(j);
        if(c==0)
        {
            u[t]=j;
            t++;
        }
        else if(c==1)
        {
        }
    }
    printf("%d",u[n-1]);
    return 0;
}

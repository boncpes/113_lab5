#include<stdio.h>
int main()
{
    int n,i,j,k,t,m;
    scanf("%d",&n);
    int u[n],p[n];
    u[0]=1;
    u[1]=2;
    u[2]=3;
    u[3]=4;
    u[4]=5;
    k=5;
    for(i=6;i<n*n;i++)
    {
        while(i!=1)
        {
            if(i%2==0)
            {
                i=i/2;
            }
            else if(i%3==0)
            {
                i=i/3;
            }
            else if(i%5==0)
            {
                i=i/5;
            }
        }
    }
    printf("%d",u[n-1]);

    return 0;
}

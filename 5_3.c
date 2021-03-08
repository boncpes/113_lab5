#include<stdio.h>
int main()
{
    int n,i,j,k,t,m;
    scanf("%d",&n);
    int u[n],int p[n];
    u[0]=1;
    u[1]=2;
    u[2]=3;
    u[3]=4;
    u[4]=5;
    k=5;
    for(i=6;i<n*2;i++)
    {
        t=0;
        m=0;
        for(j=2;i!=1;j++)
        {
            while(i%j==0)
            {
                p[t]=j;
                t++;
                m++;
                i=i/j;
            }
        }
        for(j=0;j<m;j++)
        {
            if(p[j]==2 || p[j]==3 ||p[j]==5)
        }
    }
    printf("%d",u[n-1]);

    return 0;
}

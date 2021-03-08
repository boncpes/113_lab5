#include<stdio.h>
int main()
{
    int n,i,j,k,t,c;
    scanf("%d",&n);
    int u[n];
    u[0]=1;
    k=1;
    for(i=2;i<n*n;)
    {
        if(k==n)
        {
            break;
        }
        t=i;
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
                c=1;
                break;
            }
        }
        if(c==0)
        {
            u[k]=i;
            k++;
            i++;
        }
        else if(c==1)
        {
            i++;
        }
    }
    printf("%d",u[n-1]);
    return 0;
}

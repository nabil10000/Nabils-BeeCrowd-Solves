#include<stdio.h>
int main()
{
    int m,n,sum,M,N;
    while(1)
    {
        sum=0;
        scanf("%d %d",&m,&n);
        if(m>n)
        {
            M=n;
            N=m;
        }
        else
        {
            M=m;
            N=n;
        }
        if(M<=0||N<=0)
        {
            break;
        }
        for(int i=M; i<=N; i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);

    }
}


#include<stdio.h>

int main()
{
    int p,pr,sum;
    scanf("%d",&p);
    scanf("%d",&pr);
    pr=100-pr;
    while(p>0)
    {
        sum+=p;
        p=((pr*p)/100);
    }
    printf("%d",sum);
    return 0;
}
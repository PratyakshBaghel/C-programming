#include<stdio.h>
int main()
{
    int n,i,ec=0,oc=0,t=0,s=0;
    printf("Enter the number->");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            ec++;
            if(i%5==0 && i%3==0)
            {
                printf("%d even, it is divisible by both 5 and 3\n",i);
            }
            else if(i%5==0)
            {
                printf("%d even, it is divisible by 5\n",i);
            }
            else if(i%3==0)
            {
                printf("%d even, it is divisible by 3\n",i);
            }
            else
            {
                printf("%d even\n",i);
            }
        }
        else
        {
            oc++;
            if(i%5==0 && i%3==0)
            {
                printf("%d odd, it is divisible by both 5 and 3\n",i);
            }
            else if (i%5==0)
            {
                printf("%d odd, it is divisible by 5\n",i);
            }
            else if(i%3==0)
            {
                printf("%d odd, it is divisible by 3\n",i);
            }
            else
            {
                printf("%d odd\n",i);
            }
        }
        s+=i;
    }
    printf("The total sum->%d\n",s);
    printf("total even->%d\n",ec);
    printf("Total odd->%d\n",oc);
    return 0;
}
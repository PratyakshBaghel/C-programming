#include<stdio.h>
int main()
{
    int n,i,s=0,ec=0,oc=0;
    printf("Enter the number->");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d even\n",i);
            ec++;
        }
        else if(i%2==1)
        {
            printf("%d odd\n",i);
            oc++;
        }
        s+=i;
    }
    printf("Even count=%d\n",ec);
    printf("Odd count=%d\n",oc);
    printf("Total sum=%d",s);
    return 0;
}
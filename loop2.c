#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number->");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d %d %d",i,i*i,i*i*i);
    }
    return 0;
}
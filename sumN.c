#include <stdio.h>
int main()
{
    int s=0,n,i;
    printf("Enter the number->");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {  /*if i=0,1,2,3,...n then 
        start s=0 and start adding i into s
        s=0+1, now, s=1 and i=2 again adding n numbers*/
        s+=i;    // s=s+i, if s-=1,s=s-i and s*=i,s=s*i, s/=i,s=s/i
    }
    printf("%d\n",s);
    return 0;
}
        
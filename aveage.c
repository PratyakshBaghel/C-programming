#include<stdio.h>
int main()
{
    int a,b,c,d;
    float avg;
    printf("Enter your 4 EXAM nunbers->");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    avg=(a+b+c+d)/4.0;
    printf("The average of numbers is %f",avg);
    return 0;
}
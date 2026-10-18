#include<stdio.h>
int main()
{
    int m,i,t=0,p;
    for(i=1;i<=5;i++)
    {
        printf("Enter the mark->");
        scanf("%d",&m);
        t=t+m;
    }
    printf("The total marks is=%d",t);
    p=t/5;
    printf("\nYour percentage is %d\n",p);
    if(p>=90 && p<=100)
    {
        printf("\nCONGRATULATION !, you got first division");
    }
    else if (p>=75 && p<=89)
    {
        printf("\nCONGRATULATION !, you got second division");
    }
    else if(p>=60 && p<=74)
    {
        printf("\nCONGRATULATION !, you got third division");
    }
    else if(p>=40 && p<=59)
    {
        printf("\nYOU ARE PASS IN EXAM");
    }
    else
    {
        printf("\nYOU FAIL IN EXAM");
    }
    return 0;
}
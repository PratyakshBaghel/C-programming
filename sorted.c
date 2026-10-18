#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number->");
    scanf("%d%d%d",&a,&b,&c);
    if(a<=b && b<=c)
    {
        printf("The numbers are in sorted order ");
    }
     else

     {
        printf("The numbers are not in sorted order");
     }
     return 0;

}
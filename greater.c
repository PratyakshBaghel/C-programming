#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number->");
    scanf("%d",&a);
    printf("Enter the second number->");
    scanf("%d",&b);
    if(a>b)
    {
        printf("\nThe greater number is ->%d\n",a);
        printf("The smaller number is ->%d\n",b);
    }
    else if(a<b)
    {
        printf("\nThe greater number is ->%d\n",b);
        printf("The smaller number is ->%d\n",a);
    }
    else
    {
        printf("\nBOTH NUMBERS ARE EQUAL\n");
    }
    return 0;
}
#include<stdio.h>
int sum();
int sub();
int mult();
int div();
int main()
{
    int ch;
    char again;
    do
 {
    printf("\n****WELCOME****\n");
    printf("\n1.ADDITION\n2.SUBSTRACTION\n3.MULTIPLICATION\n4.DIVISION\n");
    printf("\nCHOOSE YOUR OPTION -> ");
    scanf("%d",&ch);
    switch (ch)
     {
        case 1: sum(); break;
       case 2: sub(); break;
       case 3: mult(); break;
        case 4: div(); break;
       default: printf("\nINVALID OPTION\n");
      }
    printf("\nAgain? (y/n) -> ");
    scanf(" %c", &again);
   }
   while(again == 'y' || again == 'Y');
  printf("\nTHANKS FOR USING THIS CALCULATOR\n");
}
int sum()
 {
    int a,b,s;
    printf("Enter the number -> ");
    scanf("%d",&a);
    printf("Enter the second number -> ");
    scanf("%d",&b);
    s =a+b;
    printf("Result -> %d",s);
    return 0;
 }
 int sub()
 {
    int a,b,s;
    printf("Enter the number -> ");
    scanf("%d",&a);
    printf("Enter the second number -> ");
    scanf("%d",&b);
    s =a-b;
    printf("Result -> %d",s);
    return 0;
 }
 int mult()
 {
    int a,b,m;
    printf("Enter the number -> ");
    scanf("%d",&a);
    printf("Enter the second number -> ");
    scanf("%d",&b);
    m = a * b;
    printf("Result -> %d",m);
    return 0;
 }
 int div()
 {
    int a,b,d;
    printf("Enter the number -> ");
    scanf("%d",&a);
    printf("Enter the second number -> ");
    scanf("%d",&b);
    if(b == 0)
    {
        printf("\nSORRY! CANNOT DIVIDE BY ZERO(0)\n");
    }
    else
    {
    d = a / b;
    printf("Result -> %d",d);
    }
    return 0;
 }
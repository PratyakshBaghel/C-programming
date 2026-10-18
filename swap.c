 #include <stdio.h>
int main()
{
	int a, b, temp;
    printf("Enter the first number-> ");
    scanf("%d",&a);
    printf("Enter the second number-> ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("AFTER SWAPPING\n");
    printf("FIRST NUMBER-> %d\n",a);
    printf("SECOND NUMBER-> %d\n",b);
    return 0;
}
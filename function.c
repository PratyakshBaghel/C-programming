#include<stdio.h>
int sum(int,int);
int main()
{ int a;
    a=sum(100,250);
    printf("Result->%d",a);    

}
int sum(int a, int b)
{
    int s;
    s=a+b;
    return s;
}
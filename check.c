#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character->");
    scanf("%c",&ch);
    if((ch>='a' && 'z'>=ch) || (ch>='A' && 'Z'>=ch))
    {
        printf("The character is an alphabet");
    } 
    else if('0'<=ch && ch<='9')
    {
        printf("The character is a digit");
    }
    else
    {
        printf("the character is a special character");
    }
    return 0;
}
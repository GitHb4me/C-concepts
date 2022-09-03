#include<stdio.h>
int main()
{
    char c[12];
    scanf("%[^\n]",&c);  // scanf don't stores whitespace as soon as it encounters whitespace scanf terminates so this format specifier placeholder helps to scan whitespaces in between 
    printf("output: %s",c);
   printf("%d%d",4*4); ----> it can directly perform operations
}

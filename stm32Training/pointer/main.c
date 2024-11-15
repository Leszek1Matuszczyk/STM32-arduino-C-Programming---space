#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer = 42;
    float pi = 3.141592653589793238462643383279502884197;
    int extra=1234;
    printf("Value of answer variable : %d\n",answer);
    printf("Pointer to variable answer :%p\n",&answer);
    printf("Value of pi variable %0.20f\n",pi);
    printf("Pointer to pi variable %p\n",&pi);
    printf("Value of extra variable : %d/n", extra);
    printf("Pointer to extra viariable : %p",&extra);
}

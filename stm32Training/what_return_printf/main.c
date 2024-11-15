#include <stdio.h>
#include <stdlib.h>

int main()
{
    char phrase[50];
    printf("Give me some phrase(1-50)\n");
    scanf("%s",phrase);
    int a = printf(phrase);
    printf("\nLenght of string above is %d",a);
    return 0;
}

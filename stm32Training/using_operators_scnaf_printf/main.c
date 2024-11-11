#include <stdio.h>

int main(int argc, char **argv)
{
	int num1,num2;
    
    printf("Input 2 numbers with space between : \n");
    scanf("%d %d",&num1,&num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);
}

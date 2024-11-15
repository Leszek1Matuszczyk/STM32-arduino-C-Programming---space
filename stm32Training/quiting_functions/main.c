#include <stdio.h>

int someValue(int LargerThenOne)
{
    if(LargerThenOne<1)
    {
        
        printf("That number is wrong");
        return 2;
        
        }
    printf("%d is larger then 1\n", LargerThenOne);
    return 1;
    }

int main(int argc, char **argv)
{
	int number=0;
    while(number<1)
    {
    printf("Give number Larger then 1:\n");
    scanf("%d", &number);
    someValue(number);
    }
    printf("Yeah we quit loop");
}

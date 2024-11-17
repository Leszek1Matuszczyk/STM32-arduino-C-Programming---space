#include <stdio.h>
#include <stdlib.h>

int Value=0;

void increment(int me, int amount)
{

    me+=amount;
    printf("Value inside function : %d\n", me);


}
void increment2(int *me ,  int amount)
{

    *me+=amount;
    printf("Value inside function : %d\n", *me);

}

int main()
{
    printf("Value : %d\n", Value);
    increment(Value,5);
    printf("Value : %d\n", Value);
    increment2(&Value,5);
    printf("Value : %d\n", Value);
}

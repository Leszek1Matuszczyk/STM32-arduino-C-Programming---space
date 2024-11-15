#include <stdio.h>
#include <stdlib.h>

float average(float a, float b)
{

    float Average = (a+b)/2.0;
    return Average;

}

int main()
{
    float c,d;
    printf("Give me first number : \n");
    scanf("%f",&c);
    printf("Give me second number : \n");
    scanf("%f",&d);
    printf("Average value is %f", average(c,d));
}

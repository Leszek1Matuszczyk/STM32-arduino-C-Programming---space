#include <stdio.h>
#include <stdlib.h>

float average(float a, float b)
            {
                float Average = (a+b)/2.0;
                return Average;

            }
void printAverage(float a,float b)
{

float Average = average(a,b);
printf("Average of value %f and %f is %f",a ,b, Average);

}

int main()
{
    float c,d;
    printf("Give 2 numbers separated with space : \n");
    scanf("%f %f",&c,&d);
    printAverage(c,d);
    return 0;
}

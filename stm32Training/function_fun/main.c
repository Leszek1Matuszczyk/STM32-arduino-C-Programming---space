#include <stdio.h>

void average(float a, float b)
    {
        
        printf("Averarage value is %5.5f\n", (a+b)/2.0);
        
        }


int main(int argc, char **argv)
{
	average(3.5, 35.0);
    average(3.58667, 67635.0);
    average(456456332534.5, 36786676785.0);
    average(345465543.5, 311111111115.0);    
}

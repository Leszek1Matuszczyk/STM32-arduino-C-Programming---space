#include <stdio.h>

int main(int argc, char **argv)
{
	float one_half =0.5;
    double two_thirds = 0.66666666;
    double pi =  3.1415926535897932384626433; 
    printf("1/2: |%5.2f|\n", one_half);
    printf("2/3: |%12f|\n", two_thirds);
    printf("Pi:  |%12.10f|\n", pi);
}

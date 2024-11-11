#include <stdio.h>

int main(int argc, char **argv)
{
	double one_third = 1/3;
    
    int y = 5;
    int x = 12;
    
    float average = (x + y) / 2;
    
    
    printf("1/3 = %f\n", one_third);
    printf("average of %d and %d = %f \n",x ,y ,average);
    
    printf("How casting should look :  \n");
    
    one_third = 1.0/3.0;
    average = (x + y)/ 2.0;
    
    printf("1/3 = %f\n", one_third);
    printf("average of %d and %d = %f \n",x ,y ,average);
}

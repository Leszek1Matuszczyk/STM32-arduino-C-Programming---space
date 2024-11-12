#include <stdio.h>

int main(int argc, char **argv)
{
    int units =0;
    printf("How many elements did you find? : \n");
    scanf("%d", &units);
    if(units<0)
    {
        
        printf("Warning possible to lose elements\n");
        
        }
    printf("There are %d elements\n", units);
	return 0;
}

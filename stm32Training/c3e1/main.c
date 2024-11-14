#include <stdio.h>

int main(int argc, char **argv)
{
    
    int size;
	printf("Give me size of triangle: \n");
    scanf("%d",&size);
    for(int i = 1 ; i <= size ; i++)
    {
        for(int j = 0;j < i; j++)
        {
        printf("*");
        }
        printf("\n");
        }
}

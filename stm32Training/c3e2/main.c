#include <stdio.h>

int main(int argc, char **argv)
{
    int size;
	printf("Give me size of pyramid :\n");
    scanf("%d",&size);
    
    for(int i = 1; i <= size ; i++)
    {
        
        for(int j = 0; j < size - i; j++)
        {
            
            printf(" ");
            
            }
        for(int j = 0; j < i; j++)
        {
            
            printf("* ");
            
            }
        printf("\n");
        }
        
}

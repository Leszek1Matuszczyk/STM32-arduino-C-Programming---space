#include <stdio.h>

int main(int argc, char **argv)
{
    
    int size;
	printf("Give me size of multiplication Table : \n");
    scanf("%d",&size);
    for(int i =0; i <= size+1 ; i++)
    {
        
        if(i==0)
        {
            printf("     ");
            for(int j = 1; j<= size ; j++ )
            {
                printf("%5d",j);
                }
                printf("\n");
            }else{
        for(int j =0 ; j <= size ; j++)
        {
            
            if(j==0)
            {
                
                printf("%5d",i);
                
                }else{
            printf("%5d", j*i);
                }
            }
            
            printf("\n");
            
        }
    }
}

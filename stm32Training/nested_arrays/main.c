#include <stdio.h>

int main(int argc, char **argv)
{
 
    int table_size;
    printf("Give me size of reqired multplication table(1-20) :\n");
    scanf("%d",&table_size);
    if(1>table_size||table_size>20)
    {
        
        printf("Wrong size. Default size of table will be used (10)\n");
        table_size=10;
        
        }
   
	for (int i =1; i<=table_size;i++)
    {

        for(int j =1;j<=table_size;j++)
        {
            printf("%6d",i*j);
            
            }
        
        printf("\n");
        
        }
}

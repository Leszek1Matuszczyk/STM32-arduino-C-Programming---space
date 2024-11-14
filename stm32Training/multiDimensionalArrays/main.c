#include <stdio.h>

int main(int argc, char **argv)
{
    int size=0,mj,mi;
    
	printf("Size of multplication table(1-20) : \n");
    scanf("%d",&size);
    int multi[size][size];
    for(int i = 1; i<= size; i++)
    {
        
        for(int j = 1;j <= size ;j++)
        {
            
            multi[i][j] = i*j;
            printf("%5d",multi[i][j]);
            }
        printf("\n");
        }
    printf("Chose 2 numbers to multiply from range 1 - %d\n",size);
    scanf("%d %d",&mj,&mi);
    printf("Result of multplication is %d", multi[mi][mi]);
}

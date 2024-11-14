#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main(int argc, char **argv)
{
    srand(time(NULL));
	int number = rand() % 51 +1;
    int answer =0;
    while(1)
    {
        
        printf("Gueass Number from 1 to 50?\n");
        scanf("%d",&answer);
        if(answer == number)
        {
            
            break;
            
            }else if(answer> number){
                
                printf("Wrong number , Too high. Try again\n");
                
                }else{
                    
                    printf("Wrong number , Too low. Try again\n");
                    
                    }
        
        }
        printf("You are a Winner");
}

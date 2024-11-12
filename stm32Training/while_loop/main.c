#include <stdio.h>

int main(int argc, char **argv)
{
	int grade,count=0;
    float total;
    
    printf("Give me a number from range 1-100. 0 is exit loop:\n");
    scanf("%d",&grade);
    while(grade!=0)
    {
        
        total += grade;
        count ++;
        printf("Give me other number \n");
        scanf("%d",&grade);
        
        }
        if (count>0)
        {
            
            printf("Average value of number is %5.3f",total/count);
            
            }else{
                
                printf("0 nombers was given");
                
                }
    
}

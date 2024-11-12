#include <stdio.h>

int main(int argc, char **argv)
{
	int grade;
    float total;
    int count=0;
    do{
        printf("Give me a number drom range 1-100 . 0 break loop\n");
        scanf("%d",&grade);
        total +=grade;
        count++;
        }while(grade!=0);
    count--;
    if(count>0)
    {
        
        printf("Average values of give number was %5.3f\n", total/count);
        
        }else{
            
            printf("No numbers was given");
            
            }
}

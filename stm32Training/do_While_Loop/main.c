#include <stdio.h>

int main(int argc, char **argv)
{
	int grade;
    float total;
    int count=0;
    do{
        printf("Give me a number drom range 1-100 . 0 break loop\n");
        scanf("%d",&grade);
        if(grade<=100 && grade>=1)
        {
        total +=grade;
        count++;
        }else if(grade!=0){
            
            printf("Wrong number if you want Quit choose 0 \n");
            
            }
        }while(grade!=0);
    if(count>0)
    {
        
        printf("Average values of give number was %5.3f\n", total/count);
        
        }else{
            
            printf("No numbers was given");
            
            }
}

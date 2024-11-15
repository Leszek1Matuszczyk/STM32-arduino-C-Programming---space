#include <stdio.h>

void large(char string[], int repeats,int ending)
    {
    
        for(int i =0 ; i< repeats ; i++)
        {
            printf(string);
            if(ending ==1)
                {
                    printf("\n");
                }
                }
            }
        
        

int main(int argc, char **argv)
{
    char val[25];
    int count;
    int ends;
	printf("What do you want to be written\n");
    scanf("%s", &val);
    printf("How many times?\n");
    scanf("%d",&count);
    printf("Start with new line? if no write 0 else 1\n");
    scanf("%d", &ends);
    large(val, count, ends);
}

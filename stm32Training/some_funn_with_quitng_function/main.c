#include <stdio.h>
#include <stdlib.h>

int repeat(char phrase[], int count, char end)
{

    if(count<1)
    {

    printf("Wrong number of repetitions");
    return 2;

    }
    for(int i = 0 ; i<count; i++)
    {

        printf(phrase);
        if(end=='y')
        {
            printf("\n");
        }

    }
    }



int main()
{
    int c;
    char e;
    char p[25];
    printf("End with newline (y/n) ?");
    scanf("%c",&e);
    printf("Give me phrase to repeat :\n");
    scanf("%s",&p);
    printf("How many times repeat? : \n");
    scanf("%d",&c);


    repeat(p,c,e);

}

#include <stdio.h>
#include <stdlib.h>

char sentence[50];

int main()
{
    printf("Give me sentence (1-50 signs) : ");
    scanf("%s", sentence);
    for (int i =0 ;i < 50 && *(sentence+i)!='\0';i++)
    {

        printf("%c \n",*(sentence+i));

    }
}

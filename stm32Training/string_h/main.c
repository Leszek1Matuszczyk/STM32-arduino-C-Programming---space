#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    char first[20];
    char second[20];
    char last[20];
    char full[60];
    char spacer[2]=" ";

    printf("Give your name: ");
    scanf("%s", &first);
    printf("Give your second name: ");
    scanf("%s",second);
    printf("Give your second name: ");
    scanf("%s",last);

    strncpy(full, first,20);
    strncat(full,spacer,40);
    strncat(full,second,39);
    strncat(full,spacer,20);
    strncat(full, last,19);

    printf("This is  %s, you are welcome",full);




}

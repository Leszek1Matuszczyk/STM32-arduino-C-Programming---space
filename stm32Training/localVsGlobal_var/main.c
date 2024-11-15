#include <stdio.h>
#include <stdlib.h>
char buffer[50];

void allCaps()
{
    char diff = 'a'-'A';
    char buffer[]="This is buffer";
    for(int b =0 ; b<50 && buffer[b]!='\0'; b++)
    {

    if(buffer[b]<'z'&& buffer[b]>'a')
    {
    buffer[b] -= diff;
    }

    }

}

int main()
{
    printf("Give me sentence : \n");
    scanf("%s",buffer);
    printf("Sentence before allCap : \"%s\" \n",buffer);
    allCaps();
    printf("Sentence after allCap : \"%s\" \n",buffer);

}

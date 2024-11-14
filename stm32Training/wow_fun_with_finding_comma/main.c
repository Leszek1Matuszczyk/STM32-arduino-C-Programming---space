#include <stdio.h>

int main(int argc, char **argv)
{
	char sentence[20]="Hello, World";
    printf("give me max 20 sign sentence");
    scanf("%s",sentence);
    int comma=0;
    int index;
    while(sentence[index]!='\0')
    {
        
        if (sentence[index]==',')
        {
            
            comma++;
            
            }
        index++;
        }
        if (comma>0)
        {
            printf("In sentence was %d commas",comma);
            }else{
                
                printf("There was no comma in this sentence");
                
                }
}

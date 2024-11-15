#include <stdio.h>

void help()
    {
        
        printf("This is simple program for greetings\n");
        printf(", to program work please write your name and \n");
        printf("program will greet you, Maximum name lenght is 24 signs\n");
        
        }
void greeting(char name[])
{
    
    printf("Nice to meet you %s",name);
    
    }

int main(int argc, char **argv)
{
    char val[24];
	help();
    printf("Input your name : \n");
    scanf("%s",val);
    greeting(val);
    
}

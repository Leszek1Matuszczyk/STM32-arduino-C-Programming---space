#include <stdio.h>

int main(int argc, char **argv)
{
	int count = 12;
    int total = 7;
    char answer = 't';
    char jobtitle[50] = "Lenght referee";
    
    printf("You can get  %d, but now you earn  %d \n", count, total);
    printf("Your answer is  %c \n", answer);
    printf("Welcome in your new work %s \n", jobtitle);
    
	return 0;
}

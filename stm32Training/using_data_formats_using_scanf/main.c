#include <stdio.h>

char name[20];
int age;

int main(int argc, char **argv)
{

    printf("Write your name and Age : ");
    scanf("%s %d", name, &age);
    printf("You are %d  years old and your name are %s", age, name);
	
}

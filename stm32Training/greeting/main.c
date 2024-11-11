#include <stdio.h>

int main(int argc, char **argv)
{
    char name[20];
	printf("Enter name:");
    scanf("%s",name);
    printf("Welcome %s, nice to meet you", name);
	return 0;
}

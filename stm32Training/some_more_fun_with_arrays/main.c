#include <stdio.h>

int main(int argc, char **argv)
{
	char var[50];
    
    for(int i =0 ; i < 100; i++)
    {
        var[i]=i;
        }
    
    for(int i =0 ; i < 100; i++)
    {
        printf("%d\n",var[i]);
        }
}

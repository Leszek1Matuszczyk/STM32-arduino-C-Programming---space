#include <stdio.h>

int main(int argc, char **argv)
{
	int input;
    char base;
    
    printf ("Konwersja z systemu (d)ziesiętnego, (o)semkowego i (s)zesnastkowego : \n");
    scanf("%c",&base);
    if(base=='o')
    {
        
        printf("Wprowadz liczbe osemkowa :");
        scanf("%o",&input);
        
        }
    if(base=='s')
    {
        
        printf("Wprowadz liczbę szesnastkowa :");
        scanf("%x",&input);
        
        }
    if(base=='d')
    {
        
        printf("Wprowadz liczbe dziesietna : ");
        scanf("%d",&input);
        
        }
    printf("\n Dec : %d, Oct : %o, Hex : %x \n", input, input, input);
}

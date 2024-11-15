#include <stdio.h>
#include <stdlib.h>

char buffer[30];

void allCaps()
{

    char diff = 'a' - 'A';
    for(int b = 0 ; b<30 && buffer[b]!='\0'; b++)
    {
        if(buffer[b] >= 'a' && buffer[b] <= 'z')
        {

            buffer[b]=buffer[b]-diff;

        }
    }

}

int main()
{

    printf("Wprowadz imie : ");
    scanf("%s",buffer);
    printf("Before Function : %s\n",buffer);
    allCaps();
    printf("After Function : %s\n",buffer);
}

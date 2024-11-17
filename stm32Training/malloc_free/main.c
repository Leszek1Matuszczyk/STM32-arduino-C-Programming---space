#include <stdio.h>
#include <stdlib.h>

int result_code = 404;
char result_msg[25] = "Nie znaleziono pliku";

int main()
{
    char temp[20] ="Wczytywanie... ";
    int succes =200;
    char * buffer =(char*)malloc(200 *sizeof(char));


    printf("Adrees zmiennej result_code         :       %p\n",&result_code);
    printf("Adrees zmiennej result_msg          :       %p\n",&result_msg);
    printf("Adrees zmiennej temp                :       %p\n",&temp);
    printf("Adrees zmiennej succes              :       %p\n",&succes);
    printf("Adrees zmiennej bufer(na stosie)    :       %p\n",buffer);
    free(buffer);
    printf("Adrees zmiennej bufer(na stosie)    :       %p\n",buffer);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void confirm()
{

    char answer;
    printf(" Dotyou want quit program y/n\n");
    scanf("%c",&answer);
    if (answer =='y'|| answer=='Y')
    {

        printf("Goodbye");
        exit(0);
        printf("This phrase will never be executed");

    }

}

int main()
{
    while(1)
    {
        printf("We are in main do you want exit program?\n");
        confirm();
        printf("ok we didn't exit program\n");
    }
}

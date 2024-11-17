#include <stdio.h>
#include <stdlib.h>

void doStuff()
{
    int local= 12;
    printf("Value of Local Variable : %d\n",local);
    printf("Addres of Local variable : %p\n",&local);
}

int main()
{
    int count =1;
    printf("Value of Count variable : %d\n",count);
    printf("Addres of Count Variable : %p\n",&count);
    doStuff();
}

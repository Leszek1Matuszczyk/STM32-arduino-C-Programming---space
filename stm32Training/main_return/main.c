#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;
    printf("You want Succeed or lose W/L\n");
    scanf("%c",&c);
    if(c=='W')
    {

    return 0;

    }else if(c=='L')
    {

    return 1;

    }else {

    printf("Wrong answer : %c\n",c);

    }

}

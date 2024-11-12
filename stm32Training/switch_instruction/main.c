#include <stdio.h>

int main(int argc, char **argv)
{
	int place = 0;
    printf("Which place? :\n");
    scanf("%d",&place);
    switch(place)
    {
    case 1 :
    printf("First place Golden Medal\n");
    break;
    case 2 :
    printf("Second place Silver Medal\n");
    break;
    case 3 :
    printf("Third place Bronze Medal\n");
    break;
    default :
    if(place>3)
    {
    printf("You are not on podium\n");
    }else{
        
        printf("Wrong data\n");
        
        }
    }
    }



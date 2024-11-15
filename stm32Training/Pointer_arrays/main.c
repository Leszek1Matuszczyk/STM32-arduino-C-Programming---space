#include <stdio.h>
#include <stdlib.h>

int main()
{
    char title[30]="Adresses of example array";
    int page_count[5]={14,78,49,18,50};
    printf("Value of variable : %s\n",title);
    printf("Variable address title : %p\n",&title);
    printf("Size of title variable : %d\n",sizeof(title));
    printf("Values of array page_count: { ");
    for(int i = 0; i<5 ;i++)
    {
        printf("%d ",page_count[i]);
    }
    printf("}\n");
    printf("Adress of variable page_counts : %p\n",&page_count);
    printf("Size of variable page_count : %d\n",sizeof(page_count));
    }



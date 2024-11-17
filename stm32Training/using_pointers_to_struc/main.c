#include <stdio.h>
#include <stdlib.h>
struct point{
int x,y;
};
struct point ball={10,5};
struct point *ptr=&ball;


int main()
{
    int val;
    printf("give value of y :");
    scanf("%d",&val);
    (*ptr).y = val;
    printf("give value of x :");
    scanf("%d",&val);
    (*ptr).x = val;
    printf("y = %d x = %d",ptr->y,ptr->x);
}

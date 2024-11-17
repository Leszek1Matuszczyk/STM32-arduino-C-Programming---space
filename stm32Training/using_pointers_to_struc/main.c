#include <stdio.h>
#include <stdlib.h>
struct point{
int x,y;
};
struct point ball={10,5};
struct point *ptr=&ball;

void func(struct point * pBALL)
{
    pBALL->x+=5;
    pBALL->y+=10;
}



int main()
{
    int val;
    printf("give value of y :");
    scanf("%d",&val);
    (*ptr).y = val;
    printf("give value of x :");
    scanf("%d",&val);
    (*ptr).x = val;
    printf("y = %d x = %d\n",ptr->y,ptr->x);
    func(ptr);
    printf("y = %d x = %d\n",ptr->y,ptr->x);
}

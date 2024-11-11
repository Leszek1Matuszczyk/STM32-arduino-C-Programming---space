#include <stdio.h>

int main(int argc, char **argv)
{
    float root2 = 1.4142;
    float phi = 1.618034;
    float pi = 3.1415926;
    printf("          %10s%10s%10s\n","root2","phi","pi");
    printf("x1        %10.4f%10.4f%10.4f\n",root2,phi,pi);
    printf("x2        %10.4f%10.4f%10.4f\n",2 * root2,2 * phi,2 * pi);
}

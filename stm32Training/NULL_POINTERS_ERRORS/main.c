#include <stdio.h>
#include <stdlib.h>


double radius;
double pi = 3.14156;
double * pi_ptr = &pi;

double circ(double rad, double * Fpi)
{
if(Fpi==NULL)
{

    printf("Wrong value of pointer(NULL)");
    return 0.0;
}
return 2.0 * rad * (*Fpi);
}

int main()
{
    printf("Give me radius of circle and i will give you circumstance : \n");
    scanf("%lf",&radius);
    printf("Circumstance: %lf\n",circ(radius,pi_ptr));
}

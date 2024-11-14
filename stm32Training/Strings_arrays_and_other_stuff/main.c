#include <stdio.h>

int main(int argc, char **argv)
{
	double ledger[100];
    printf("Size of double is %d\n", sizeof(double));
    printf("Size of ledger is %d\n",sizeof ledger);
    printf("Number of elements of ledger Array is %d\n", sizeof ledger/sizeof(double));
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char a =0xD;
    char b = 0x7;
	printf("1101 & 0111 == %d\n",a & b);
    printf("1101 | 0111 == %d\n",a | b);
    printf("~1101 == %d\n",~a);
    printf("1101 ^ 0111 == %d\n",a ^ b);
    printf("1101 << 3 = %d\n",a << 3);
    printf("1101 >> 2 = %d\n",a >>2);
    
}

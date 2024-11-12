#include <stdio.h>

int main(int argc, char **argv)
{
	printf("1 == 1 %s\n",1 == 1 ? "True":"False");
    printf("1 != 1 %s\n",1 != 1? "True":"False");
    printf("5 < 10 %s\n",5 < 10? "True":"False");
    printf("5 > 10 %s\n",5 > 10? "True":"False");
    printf("12 <= 10 %s\n",12 <= 10? "True":"False");
    printf("12 >=10 %s\n",12 >= 10? "True":"False");
}

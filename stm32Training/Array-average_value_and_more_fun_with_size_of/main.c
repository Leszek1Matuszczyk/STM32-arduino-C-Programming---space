#include <stdio.h>

int main(int argc, char **argv)
{
    float readings[] = {8.9 , 8.6 , 8.5 , 8.7 , 8.9 , 8.8 , 8.5};
	int count =sizeof readings / sizeof(float);
    float total =0.0, average;
    for(int i =0; i<count; i++)
    {
        total=total+readings[i];
        }
        average=total/(float)count;
        printf("%10.5f\n",average);
	return 0;
}

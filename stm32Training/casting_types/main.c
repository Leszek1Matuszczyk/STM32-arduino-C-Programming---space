#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	double one_third = 1/3;
    
    int y = 5;
    int x = 12;
    
    float average = (x + y) / 2;
    int sum = 0;
    
    char word[30];
    
    printf("1/3 = %f\n", one_third);
    printf("average of %d and %d = %f \n",x ,y ,average);
    
    printf("How casting should look :  \n");
    
    one_third = 1.0/3.0;
    average = (x + y)/ 2.0;
    
    printf("1/3 = %f\n", one_third);
    printf("average of %d and %d = %f \n",x ,y ,average);
    printf("Sometimes you dont know how many argument function will have\n");
    printf("Give me random word:\n");
    scanf("%s",word);
    
    for (int i =0; i<strlen(word);i++)
    {
        sum = word[i]+sum; 
        }
    average = sum/(float)strlen(word);
    printf("Average value of char in %s = %f",word,average);
}

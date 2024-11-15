#include <stdio.h>
#include <stdlib.h>
signed long long f(int Fibbonnaci)
{
    if(Fibbonnaci<=0)
    {

    return 0;

    }
    if(Fibbonnaci==1)
    {

        return 1;

    }
    return (f(Fibbonnaci-1)+f(Fibbonnaci-2));
}

int main()
{

    int g;
    signed long long answer;
    printf("Which number or Fibbonacci sequence you want? :\n");
    scanf("%d",&g);
    answer=f(g);
    printf("%d number of fibbonacci sequence is %lld \n",g,answer);
    printf("First 10 number of Fibbonacci sequence : \n");
    for(int i =1 ; i<=55 ; i++)
        {

         printf("%d: %lld\n",i,f(i));

        }


}

#include <stdio.h>
#include <stdlib.h>

struct transaction
{

    double amount;
    int day,month,year;

};

void account(struct transaction trans)
{

    printf("Dollar  : %5.5lf\n",trans.amount);
    printf("Day     : %d\n",trans.day);
    printf("Month   : %d\n",trans.month);
    printf("Year    : %d\n",trans.year);

}
struct transaction Billing[50];
int main()
{
    double saldo =0;
    for(int i =0; i<5;i++)
    {
        printf("%d transaction\n",i+1);
        printf("give Amount : ");
        scanf("%lf",&Billing[i].amount);
        printf("give Day : ");
        scanf("%d",&Billing[i].day);
        printf("give Month : ");
        scanf("%d",&Billing[i].month);
        printf("give Year : ");
        scanf("%d",&Billing[i].year);
        printf("Saldo : %lf\n",saldo += Billing[i].amount);
    }
    double saldo2;

    for(int i =0;i<5;i++)
    {
        account(Billing[i]);
    }

}

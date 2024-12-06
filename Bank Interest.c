#include<stdio.h>

int main()
{
    float investment = 1000 , t_amount = 1000, m ,r;
    int n;

    r = 0.05;

    printf("\n Year \t\t Total Amount\n");

    for(n=1;n<=10;n++)
    {
        m = t_amount*r;

        t_amount = t_amount + m;

        printf(" %d \t\t %.2f\n",n , t_amount);
    }

        return 0;

}

#include<stdio.h>

int main ()
{

    float Unit , Surcharge;
    float Bill  , total_bill;

    printf("Please Input The Units Consumed This Month : ");
    scanf("%f" , &Unit);

    if (Unit <= 300)
    {
        total_bill = Unit*3;
    }
    if(Unit > 300)
        {
            Bill = Unit* 3.5;
            //Adding Surcharges Amount
            Surcharge = (Bill / 100) * 5;
            total_bill = Surcharge + Bill;
        }

    printf("\n\tYour Total Bill Of This Month is : %.2f \n" , total_bill );

    return 0;

}

#include<stdio.h>

int main()
{
    //Declaring Variables in Int and Float
    int Acc_Number;
    float initial_blnc , total_credits , credit_limit , total_blnc , total_itemCharged;

    printf("Give us Your Account Number (Enter -1 to Exit) :");
    scanf("%d" , &Acc_Number);

    while(Acc_Number!=-1)
    {
        //Taking Values from User
        printf("\nPlease Enter Initial Balance : ");
        scanf("%f" , &initial_blnc);

        printf("\nPlease Enter Total Charges :");
        scanf("%f" , &total_itemCharged);

        printf("\nPlease Enter Total Credits : ");
        scanf("%f" , &total_credits);

        printf("\nPlease Enter Credit Limits : ");
        scanf("%f" , &credit_limit);

        //Giving Output Here
        printf("\nAccount Number is = '%d' " , Acc_Number);
        printf("\nCredit Limit is = '%.2f' " , credit_limit);

        //Calculating Total Balance using Formula
        total_blnc = initial_blnc + total_itemCharged - total_credits;
        printf("\nTotal Balance is = '%.2f' " , total_blnc);

        //Checking if The given Credit limit exceeded.
        if (total_blnc > credit_limit)
        {
            printf("\nCredit Limit Exceeded!!");
        }
        printf("\n\nGive us Your Account Number (Enter -1 to Exit) :");
        scanf("%d" , &Acc_Number);

    }

        printf("\n\n'Thank You For using My Program' \n\n");
}

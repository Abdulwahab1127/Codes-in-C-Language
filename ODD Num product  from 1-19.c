#include<stdio.h>

int main()
{
    //Declaring Variables
    int number ;
    int Product = 1, Counter = 0;

    printf("From '1' to Which Number you want to get Product of the ODD Numbers : ");
    scanf("%d" , &number);

    while(Counter <= number)
    {
        if (Counter%2!=0)//Using For loop to find ODD numbers
        {
            Product = Product * Counter;
        }
        //incrementing 1
        Counter++;

    }
    //Output Outside the While Loop
    printf("\n\nODD Numbers SUM from '1' to '%d' is =  '%d' \n\n" , number , Product);

    return 0;
}


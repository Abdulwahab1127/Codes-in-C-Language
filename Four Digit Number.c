#include<stdio.h>

int main()
{
    //Declaring a Veriable
    int number;

    printf("Please Give us a Four Digit Number :");
    scanf("%d" , &number);

    //Declaring i = 1000;
    int i = 1000;

    while(number > 0)

    {
        printf("%d\t" , number / i);
        //Using Formula here
        number%= i;

        i /= 10;



    }

        return 0;









}

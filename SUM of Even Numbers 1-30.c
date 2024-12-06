#include<stdio.h>

int main()
{
    //Declaring Variables
    int number ;
    int SUM = 0, Counter = 0;

    printf("From '1' to Which Number you want to ADD the Even Numbers : ");
    scanf("%d" , &number);

    while(Counter <= number)
    {
        if (Counter%2==0)//Using If to Find Even Numbers
        {
            SUM = SUM + Counter;
        }
        //Incrementing 1
        Counter++;

    }
    //Final Output Outside the While Loop
    printf("\n\nEven Numbers SUM from '1' to '%d' is =  '%d' \n\n" , number , SUM);

    return 0;
}

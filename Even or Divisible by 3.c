
#include<stdio.h>

int main()
{
    int num , i;


    for (i=1;i<=10;i++)
    {


        printf("\nPlease Give us a Number : ");
        scanf("%d" , &num);

        if(num%2==0)
            printf("\nThe Given Number is 'EVEN' \n");
        else if(num%3==0)
            printf("\nThe Given Number is Divisible by 3 \n");
        else
            printf("\nYou've Given Invalid Number! (TRY AGAIN) \n");

    }
    return 0;

}

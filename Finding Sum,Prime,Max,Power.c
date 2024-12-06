#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int num , sum , average , max , prime , power , user_num , flag=0 ;
    int userNum2 , m , base , exp , result=1;

    while(num!=5){

        printf("\nPress 1 to Calculate and print Sum of 1-30 Even Numbers: ");
        printf("\nPress 2 to Determine and Print Max Number out of 10 Numbers Given by User: ");
        printf("\nPress 3 to To Check Prime Numbers: ");
        printf("\nPress 4 to Find Power:  ");
        printf("\nPress 5 to Exit from The Program: ");
        scanf("%d" , &num);

        switch(num)
        {
        case 1://Even Sum
            for(int i=1;i<=30;i++)
            {
                if(i%2==0)
                sum +=i;
            }
         printf("\nThe Sum Of Even Numbers from 1-30 is : '%d' \n" , sum);
         break;

        case 2://Max Number
            printf("\nGive us 10 Numbers to Find Max From : ");
            scanf("%d" , &user_num);

            max = user_num;

            for(int i=1;i<10;i++)
            {
                printf("\nGive us Next Number : ");
                scanf("%d" , &user_num);

                if(user_num>max)
                   max = user_num;
            }
            printf("\nThe Max Number is : '%d' ", max);
            break;

        case 3://Prime
            printf("\nEnter Number to Check For Prime : ");
            scanf("%d" , &userNum2);

            m=userNum2/2;

            for(int i=2;i<=m;i++)
            {
                if(userNum2%i==0)
                {
                    printf("\nThe Given Number is Not Prime Number\n");
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                printf("\nThe Given Number is a Prime Number\n");
            }

        case 4://Power
            printf("\nUsing Power Method:");
            printf("\nGive us The Base Value : ");
            scanf("%d", &base);

            printf("\nGive us The Exponent Value : ");
            scanf("%d", &exp);

            while(exp != 0)
            {
                result *=base;
                --exp;
            }

            printf("\nThe Answer is : %d \n" ,result);

        }

    }

    printf("\n\nThank You For Using My Code!\n\n");
    return 0;
}

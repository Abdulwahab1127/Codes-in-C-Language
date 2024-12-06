#include <stdio.h>

int main(){

    printf("***  PROGRAMMING FUNDAMENTALS. ***\n");
    printf("***  Assignment No.2  ***\n");
    printf("***  FA22-BSE-160  ***\n");
    printf("***  ABDUL WAHAB ***\n\n");


    //Initializing Variables
    int m,n,i = 1,sum = 0 , user_input;

    int min = 20,max = 0;

    while(i<6){

    //Taking Values From User
    printf(" Please Enter the Marks of '%d' students out of 20 Marks = ", i);

    scanf("%d",&m);

    if (m < 21)
        {

           //Calculating Sum of Marks
            sum += m;
          //Storing Min and Max Value from m Variable
            if(m >= max){

                max = m;

            }
            if(m <= min){

                min = m;

            }

            i++;
        }
    else
        {
            printf("\n\nPlease Enter Marks Less Than 20 !!\n");
            printf("Otherwise The Answers Will Be Incorrect !");
            break;
        }
}
    //Taking user input command to print output
   for(int j=0;j<2;j++)
   {
        printf("\n\nTo Get Sum & Average Press 1 , To Get Min & Max Press 2 :  ");
        scanf("%d" , &user_input);

        //Using Switch To Print The User Desired Out
        switch (user_input)
            {
                case 1:
                printf("\n\nThe Sum of all the marks achieved is '%d'\n\n", sum);
                printf("The Average marks achieved are '%d'\n\n", sum/5);
                break;

                case 2:
                printf("\n\nThe Maximum marks achieved are '%d'\n\n", max);
                printf("The Minimum marks achieved are '%d'\n\n", min);
                break;

            }
    }
        printf("Thank You For Using My Code :) \n\n");

        return 0;

}

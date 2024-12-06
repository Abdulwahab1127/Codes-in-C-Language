#include<stdio.h>

int main()
{
  //Declaring Variables
  float sales , total_Salary;
  float com_sales;

   printf("Please Enter Total Number of Sales(-1 to Exit) : ");
   scanf("%f" ,  &sales);

    while(sales!=-1)
    {
        //Using Formula For Salary
        com_sales = sales / 100 *9;
        total_Salary = com_sales + 200;

        //Giving Outputs
        printf("\nYour Sales For this week is (in pounds) : %.2f " , total_Salary);

        printf("\n\nPlease Enter Total Number of Sales(-1 to Exit) : ");
        scanf("%f" ,  &sales);
    }

    printf("\n\nThank You for Using My Code \n\n");


}

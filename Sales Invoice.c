#include<stdio.h>

int main()

{
 int quantity , discount;
 float total_bill , rate_of_item;

    printf("Please Enter Price of The Item : ");
    scanf("%f" , &rate_of_item);

    printf("\nPlease Enter The Quantity too : ");
    scanf("%d" , &quantity);
    //Giving Discount
    if (quantity > 1000)
        discount = 10;
    total_bill = quantity*rate_of_item;
    total_bill = total_bill - (quantity*rate_of_item*discount/100);

    printf("\nTotal Payable Amount is = %.2f \n\n" , total_bill);


    return 0;
}

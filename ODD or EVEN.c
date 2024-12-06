#include<stdio.h>

int main()
{
    int num;

    printf("Please Give us a Number : ");
    scanf("%d" , &num);

    if(num%2==0)
        printf("\nThe Given Number is 'EVEN' \n");
    else if(num%2==1)
        printf("\nThe Given Number is 'ODD' \n");
    else
        printf("\nYou've Given Invalid Number!\n");

    return 0;

}

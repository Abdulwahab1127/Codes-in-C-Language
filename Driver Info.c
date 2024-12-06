#include<stdio.h>
int main()
{
    int m_status , age, Gender;
    printf("Please Enter Marriage Status '1 For Married & 0 for UnMarried' :");
    scanf("%d" , &m_status);

    printf("\nPlease Enter Your Age :");
    scanf("%d" , &age);

    printf("\nPlease Enter You Gender '1 For Male & 0 For Female' :");
    scanf("%d" , &Gender);

    if (m_status==1)
        printf("\nThe Driver is Assured ");
    else if(m_status==0 && Gender==1 && age>30)
        printf("\nThe Driver is Assured ");
    else if(m_status==0 && Gender==0 && age>25)
        printf("\nThe Driver is Assured ");
    else
        printf("\nThe Driver is not Assured\n ");

        return 0;
}

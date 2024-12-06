#include<stdio.h>
#include<math.h>

float parking(float hours,float charges)

{
    if(hours==0)
        {
            return 0;
        }

    if(hours<=3)
        {
        return charges=2;
        }

    else if (hours>3 && hours <19)
        {

        return charges=2+(0.5*(hours-3));

        }

    else if (hours>=19 && hours<=24)
        {

        return charges=10;

        }
}

int main()
{
    int i,j;
    float hours1=0.0,hours2=0.0,hours3=0.0 , charges;
    float hoursSum=0 , chargesSum=0;



        printf("\nEnter The Parked Hours For The 1st Car :");
        scanf("%f" , &hours1);

        printf("\nEnter The Parked Hours For The 2nd Car :");
        scanf("%f" , &hours2);

        printf("\nEnter The Parked Hours For The 3rd Car :");
        scanf("%f" , &hours3);

        //Header
        printf("\nCar\tHours\tCharge\n");

        //Outputs of Charges and Hours
        printf("\n1\t%.2f\t%.2f\n" , hours1 , parking(hours1,charges));
        printf("\n2\t%.2f\t%.2f\n" , hours2 , parking(hours2,charges));
        printf("\n3\t%.2f\t%.2f\n" , hours3 , parking(hours3,charges));

        //Getting Sum Of Charges and Hours
        hoursSum += hours1+hours2+hours3;
        chargesSum = parking(hours1,charges)+parking(hours2,charges)+parking(hours3,charges);



        //Printing Sum Here
        printf("\n________________________");
        printf("\n\nTotal\t%.2f\t%.2f\n" , hoursSum , chargesSum);

}

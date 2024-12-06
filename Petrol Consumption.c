#include<stdio.h>

int main()
{
    //Declaring Variables
    float total_Consumption = 0;
    float liters;
    float kmeter,consumptionn,average_consp;

    int counter = 0;

    printf("\nPlease Give us The Value of liters Used Or -1 to Quit :  ");
    scanf("%f" , &liters);

    //Using While Loop and -1 to Exit
    while (liters != -1)
    {


        printf("\nPlease Tell us How much you traveled in KM's : ");
        scanf("%f" , &kmeter);

        //Consumption Formula
        consumptionn = (liters / kmeter) * 100;

        printf("\nConsumption For This Tank Was = %.2f" , consumptionn);

        total_Consumption += consumptionn;

        printf("\n\nPlease Give us The Value of liters Used Or -1 to Quit :  ");
        scanf("%f" , &liters);

        counter++;
    }

        if(counter!= 0)
        {
            average_consp = total_Consumption / counter;
            //Final Output of Average
            printf("\nThe Overall Average Consumption is = %.2f" , average_consp);
        }
        else
            printf("Error Occurred !!");



        printf("\n\n\tThank You for Using My Program\n\n");

    return 0;
}


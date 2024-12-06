//Calls Bill Using Functions
#include<stdio.h>
#include<math.h>

float callCentre (int calls)
{
    float charges;

    if(calls<=50)
        charges=700;
    if(calls>50 && calls<100)
        charges=700 + (ceil(calls) - 50)*3.50;
    if(calls>100 && calls<150)
        charges=700 + (50*3.50) + (ceil(calls) - 100)*2.50;
    if(calls>150)
        charges=700 + (50*3.50) + (50*2.50) + (ceil(calls) - 150)*1.50;



    return charges;
}


int main()
{

    int i ,calls;
    float charges , sumCharges=0;
        printf("\nTotal Number Of Calls Done ? or 0 to Exit : ");
        scanf("%d" , &calls);

    while(calls!=0)
    {

        printf("\nTotal Charges for %d Calls are : %.2f \n" , calls , callCentre(calls));

        sumCharges+=callCentre(calls);

        printf("\nTotal Number Of Calls Done ? or 0 to Exit : ");
        scanf("%d" , &calls);

    }

    printf("\n\nTotal Charges will be : %.2f"  ,sumCharges);

    return 0;
}


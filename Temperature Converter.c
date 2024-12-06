#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//Converting Fah into Calsius
//-1 to Exit the Program
void fahrenheit(float fah , float cal)
{
    while(fah!=-1)
    {

        printf("\n\t\t\t\t   Enter The Temperature in Fahrenheit : ");
        scanf("%f",&fah);
        if(fah>=32 && fah<=212 && fah!=-1)
        {
            printf("\n\t\t\t\t    Fahrenheit :\t\tCelsius:    ");
            //Formula to Convert Fah into CAl
            cal = (fah -32)/1.8;
            printf("\n\t\t\t\t     %.2f\t\t\t  %.2f\n\n" ,fah, cal);
        }
        else if(fah>0 && fah<32 && fah>212 || fah!=-1)
        {
            printf("\n\t\t\t\t\tInvalid Input ! Try Again\n");
            --fah;
        }

    }


    printf("\n\t\t\t\t    __________________________________\n\n");
    main();

}
//Converting Cal into Fahrenheit
//-1 to Exit the Program
void Calsius(float fah , float cal)
{
while(cal!=-1)
    {
        printf("\n\t\t\t\t    Enter The Temperature in Celsius :");
        scanf("%f",&cal);
        if(cal>=0 && cal<=100 && cal!=-1)
        {
        printf("\n\t\t\t\t    Celsius :\t\tFahrenheit:    ");
        //Formula to Convert Cal into Fah
        fah = (cal*1.8)+32;

        printf("\n\t\t\t\t     %.2f\t\t  %.2f\n\n" ,cal, fah);
        }
        else if(cal<-1 && cal>100 || cal!=-1)
        {
            printf("\n\t\t\t\t\tInvalid Input ! Try Again\n");
            --cal;
        }

    }
     printf("\n\t\t\t\t    __________________________________\n\n");

       system("CLS");
       printf("\n\t\t\t\tExamplesss");

     main();


}
int main()
{
    int choice;
    float fah,cal;
    printf("\n\t\t\t\t!!!Welcome to Temperature Converter Program!!!\n");
    printf("\n\t\t\t\t\t1 : 'Fahrenheit to Calsius'");
    printf("\n\t\t\t\t\t2 : 'Calsius to Fahrenheit'");
    printf("\n\t\t\t\t\t3 : 'Press -1 anytime To Exit'");
    printf("\n\t\t\t\t\t     Your Choice: ");
    scanf("%d" ,&choice);

    if(choice==1)
    {
       fahrenheit(fah,cal);

    }
    else if(choice==2)
    {
        Calsius(fah,cal);

    }
    else
        printf("\n\n\t\t\t\t\tProgram Closed Successfully!!");
        printf("\n\n");

        return 0;
    }







#include<stdio.h>
void line()
{
int i;
    printf("\n");
for(i=1;i<=35;i++)
    printf("=");
}
void header()
{
printf("\n");
printf("Built and Designed by Arslan-ud-Din-Shafiq\n\nReg. No .DDP-SP14-BSE-005");
printf("\n");
}
float a(float hours,float charge)
{

    if(hours==0)
    return 0;
    if(hours<=3)
    return charge=2;
else if (hours>3 && hours <19)
    return charge=2+(0.5*(hours-3));
else if (hours>=19 && hours<=24)
    return charge=10;
}
int main()
{

    int car=1;
    float hrs,chrg,sum1,sum2;
line();
header();
line();
        printf("\nCar\tHours\tCharge");
  while(car!=4)
  {
      printf("\t\t\n\n\t");
    scanf("%f",&hrs);
      printf("%d\t\t%.2f",car,a(hrs,chrg));
      car++;
  sum1+=hrs;
sum2+=a(hrs,chrg);
  }

printf("\n\nTotal\t%.2f\t%.2f\n\n\n\n",sum1,sum2);
    return 0;

}

#include<stdio.h>

float cal_ch(float hours);

int main()
{
  int car;
  float hours, thrs, tch, hr1, hr2, hr3;



   printf("Enter 1st car's hours: ");
   scanf("%f", &hr1);

   printf("Enter 2nd car's hours: ");
   scanf("%f", &hr2);

    printf("Enter 3rd car's hours: ");
    scanf("%f", &hr3);


  printf("\n\nCars\tHours\tCharges\n");


      printf("\n1\t%.2f\t%.2f", hr1 , cal_ch(hr1));
      printf("\n2\t%.2f\t%.2f", hr2 , cal_ch(hr2));
      printf("\n3\t%.2f\t%.2f", hr3 , cal_ch(hr3));



      thrs += hr1+hr2+hr3;
      tch +=  cal_ch(hr1)+cal_ch(hr2)+cal_ch(hr3);

  printf("\n\nTotal\t%.2f\t%.2f\n\n", thrs, tch);
}

float cal_ch(float hours)
{
    float ch;

    if(hours<=3)
        return ch=2;
    if(hours>3)
        return ch= 2+((ceil(hours)-3)*0.5);
    if(hours>10 && hours<24)
        return ch=10;
    }

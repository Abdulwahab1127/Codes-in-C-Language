#include<stdio.h>

int range_1_2(char num1)
{
    num1=srand()%3+1;
    printf("\n\t %d\t(Range Between 1 & 2)\n",num1);
    printf("________________________________________\n");


}
int range_1_100(int num2)
{
    num2=srand()%100+1;
    printf("\t %d\t(Range Between 1 & 100)\n",num2);
    printf("________________________________________\n");

}
int range_0_9(int num3)
{
    num3=srand()%10;
    printf("\t %d\t(Range Between 0 & 9)\n",num3);
    printf("________________________________________\n");

}
int range_1000_1112(int num4)
{
    num4=srand()%113+1000;
    printf("\t%d\t(Range Between 1000 & 1112)\n",num4);
    printf("________________________________________\n");
}
int range_minus1_1(int num5)
{
    num5=srand()%3-1;
    printf("\t %d\t(Range Between -1 & 1)\n",num5);
    printf("________________________________________\n");

}
int range_minus3_11(int num6)
{
    num6=srand()%15-3;
    printf("\t %d\t(Range Between -3 & 11)\n",num6);

}

int main()
{
    int numbers,num1,num2,num3,num4,num5,num6;

    range_1_2(num1);
    range_1_100(num2);
    range_0_9(num3);
    range_1000_1112(num4);
    range_minus1_1(num5);
    range_minus3_11(num6);

    printf("\n\n");




    return 0;
}

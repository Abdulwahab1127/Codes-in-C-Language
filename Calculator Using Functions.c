#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

//Function Declaration
int sum(int a  ,int b);
int subtract(int a ,int b);
int multiply(int a ,int b);
int divide(int a ,int b);
int power(int  a,int b);


int main()
{
    //Function Declaration

     int a = 0 ,b = 0;
     int result = 0;
     char opr;


    printf("\nPlease Give us Two Values For Calculation:  ");
    scanf("%d %d" ,&a , &b);

    printf("\nPlease Give us Operator from :");
    printf(" [+ , - , * , / , %% , ^ : ");

    scanf(" %c" , &opr);

    switch(opr)
    {
        case '+' :
        result = sum(a,b);
        printf("\nFinding Addition:");
        printf("\n\nThe Answer For %d %c %d = %d\n\n" , a,opr,b,result);
        break;

        case'-' :
        result = subtract(a,b);
        printf("\nFinding Subtraction:");
        printf("\n\nThe Answer For %d %c %d = %d\n\n", a,opr,b,result );
        break;

        case '*' :
        result = multiply(a,b);
        printf("\nFinding Multiplication:");
        printf("\n\nThe Answer For %d %c %d = %d\n\n" , a,opr,b,result);
        break;

        case '/' :
        result = divide(a,b);
        printf("\nFinding Division:");
        printf("\n\nThe Answer For %d %c %d = %d\n\n" , a,opr,b,result);
        break;

        case '^' :
        result = pow(a,b);
        printf("\nFinding Power:");
        printf("\n\nThe Answer For %d %c %d = %d\n\n" , a,opr,b,result);
        break;

        case '%' :
        result = mod(a,b);
        printf("\nFinding Remainder:");
        printf("\n\nThe Answer For %d %c %d = %d\n\n" , a,opr,b,result);
        break;

    }
    return 0 ;
}

//Making Functions FOr Calculator:

int sum(int a , int b)
{
    return (a+b);
}
int multiply(int a , int b)
{
    return (a*b);
}
int divide(int a , int b)
{
    return (a/b);
}
int subtract(int a,int b)
{
    return (a-b);
}
int mod(int a,int b)
{
    return (a%b);
}
int power(int a, int b)
{
    int c,d;
    for(int i=1;i<=d;i++)
    {
        int power = a;
        power = power*a;
        return power;
    }
}


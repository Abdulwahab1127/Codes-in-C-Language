#include<stdio.h>

int GCD ( int x , int y);

int main()
{
    int x , y;

    printf("Give Us The Value of 'X & Y' : ");
    scanf("%d %d" , &x , &y);

    printf("\n\nThe GCD Value is %d  \n\n" , GCD(x,y));

}
int GCD ( int x ,int y)
{
    if(y==0)

            return x;

    else

       return GCD(y,(x%y));

}

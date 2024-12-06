#include<stdio.h>
int main()
{
    int row,col,space=1,s;

    for(row=1;row<=5;row++)
    {

        for(s=1;s<=space;s++)
        {
            printf(" ");
        }
        space++;
        for(col=5;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
        ;
    }





}

#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
    int tempo;

    tempo=*a;
    *a=*b;
    *b=tempo;


}

int main()
{

    int c=10,d=25;
    printf("Before using Swapping Function , c=%d , d=%d ",c,d);

    swap(&c,&d);
    printf("\nAfter Swapping");
    printf("\n C = %d \n D = %d",c,d);

    return 0;
}

#include<stdio.h>

int main()
{
    int largest,smallest;
    int x ,num;

    printf("\n Please Give us a Number : ");
    scanf("%d" , &num);

    largest=num;

    smallest=num;

    for(x=1;x<=4;x++)

    {
        printf("\n Please Give us a Number : ");
        scanf("%d" , &num);

        if(num>largest)
            largest = num;
        if(num<smallest)
            smallest = num;
    }

        printf("\n The Largest Number is = %d \n" , largest);

        printf(" The Smallest Number is = %d \n\n" , smallest);

        return 0;
}

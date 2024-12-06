#include<stdio.h>

int main()
{

    int m;
    int n;

        printf("\n");
    for (m=1;m<=100;m++)
        printf("  %d\t" , m);
        printf("\n\t\t\t\t\t__________________________\n\n");

    for(m=100;m>=1;m--)
        printf("  %d\t" , m);
        printf("\n\t\t\t\t\t__________________________\n\n");

    for(n=20;n>=2;n=n-2)
            printf("  %d\t" , n);
        printf("\n\t\t\t\t\t__________________________\n\n");

    for(n=2;n<=20;n=n+2)
                printf("  %d\t" , n);
        printf("\n\t\t\t\t\t__________________________\n\n");

    for (n=99;n>=0;n=n-11)
                printf("  %d\t" , n);
        printf("\n\t\t\t\t\t__________________________\n\n");

    return 0;

}

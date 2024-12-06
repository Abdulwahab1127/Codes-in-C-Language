#include<stdio.h>


int main()
{
    int i=10;
    char c='A';
    double f =25.5;
    int *iptr = &i;
    char *cptr = &c;

    printf("Value of i : %d\n" ,i);
    printf("Address of i : %d\n" ,&i);
    printf("Value of iptr : %p\n" ,iptr);
    printf("Address of iptr : %p\n" ,&iptr);
    printf("Dereferenced Value of iptr : %d\n" ,*iptr);
    printf("Size of iptr : %d\n" ,sizeof(iptr));
    printf("Size of i : %d\n" ,sizeof(i));
    printf("\n\n");
    printf("Value of c : %c\n" ,c);
    printf("Address of c : %d\n" ,&c);
    printf("Value of cptr : %p\n" ,cptr);
    printf("Address of cptr : %p\n" ,&cptr);
    printf("Dereferenced Value of cptr : %d\n" ,*cptr);
    printf("Size of cptr : %d\n" ,sizeof(cptr));
    printf("Size of c : %d\n" ,sizeof(c));



}

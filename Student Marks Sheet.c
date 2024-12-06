#include <stdio.h>

int main(){

    printf("***  PROGRAMMING FUNDAMENTALS. ***\n\n");
    printf("***. Assignment No.2  ***\n\n");
    printf("***. FA22-BSE-158.  ***\n\n");
    printf("***  ABDUL WAHAB. ***\n\n\n");


        int marks = 0, sum = 0, avg = 0, num =1;
    int max=0, min=0, i, choice;


    printf("\n\nPress 1 to enter marks\n");
    printf("Press 2 to print Maximum marks obtained\n");
    printf("Press 3 to print Minimum marks obtained\n");
    printf("Press 4 to print Sum and Average marks obtained\n");
    scanf("%d", &choice);

    while(choice != -1){
    switch(choice){
        case 1:
         printf("Enter the marks of #1 Student = ");
        scanf("%d",&marks);

        max = marks;
    min = marks;

         for(i=2;i<=5;i++){


    printf("Enter the marks of #%d Student = ", i);
    num++;



    scanf("%d",&marks);
    sum = sum + marks;
    if(marks <= 20 ){
    if(marks >= max ){
        max = marks;

    }
    if(marks <= min ){
        min = marks;

    }
    }
    else {
    printf("\nPlease enter marks below 20\n");
    break;}


    avg = sum / 5 ;

    }
    break;
    case 2:

    printf("The Maximum marks obtained are %d\n", max);
    break;

    case 3:
    printf("The minimum marks obtained are %d\n", min);
    break;

    case 4:
    printf("The Sum of marks obtained is %d and Avg marks obtained are %d\n", sum, avg);



    }

    printf("\nPress 1 to enter marks\n");
    printf("Press 2 to print Maximum marks obtained\n");
    printf("Press 3 to print Minimum marks obtained\n");
    printf("Press 4 to print Sum and Average marks obtained\n");
    scanf("%d", &choice);

}
return 0;

}

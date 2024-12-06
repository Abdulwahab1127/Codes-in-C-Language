#include<stdio.h>

int main()
{

    int s1 , s2, s3, s4, s5 ,t_Marks , o_Marks;
    float percent;

    //Taking Subjects Marks
    printf("Enter Biology Marks : ");
    scanf("%d" , &s1);
    printf("Enter Physics Marks : ");
    scanf("%d" , &s2);
    printf("Enter Chemistry Marks : ");
    scanf("%d" , &s3);
    printf("Enter Maths Marks : ");
    scanf("%d" , &s4);
    printf("Enter Islamic Studies Marks : ");
    scanf("%d" , &s5);
    //Total Marks = 500

    t_Marks = 500;
    o_Marks = s1+s2+s3+s4+s5;
    //To Find Percentage
    percent = (float) o_Marks / t_Marks;
    percent = percent * 100;

    printf("\nYour Obtained Marks are : %d out of %d and Obtained Percentage is : %.2f ", o_Marks , t_Marks , percent);
    //TO FIND GRADE AND GPA
        if(percent>=90)
        printf("\n\nYou Got an 'A+' with '4.0'GPA\n\n ");
        else if(percent>=85)
        printf("\n\nYou Got an 'A' with '3.7'GPA\n\n ");
        else if(percent>=80)
        printf("\n\nYou Got an 'B+' with '3.3'GPA\n\n ");
        else if(percent>=75)
        printf("\n\nYou Got an 'B' with '3.0'GPA\n\n ");
        else if(percent>=70)
        printf("\n\nYou Got an 'B-' with '2.7'GPA\n\n ");
        else if(percent>=65)
        printf("\n\nYou Got an 'C+' with '2.3'GPA\n\n ");
        else if(percent>=60)
        printf("\n\nYou Got an 'C with '2.0'GPA\n\n ");
        else if(percent>=55)
        printf("\n\nYou Got an 'C-' with '1.7'GPA\n\n ");
        else if(percent>=50)
        printf("\n\nYou Got an 'D' with '1.3'GPA\n\n ");
        else
        printf("\n\nYou've Failed , Better Luck Next Time :) \n\n");


    return 0;
}

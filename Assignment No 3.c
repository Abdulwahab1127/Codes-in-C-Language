//Abdul Wahab
//FA22-BSE-160
#include<stdio.h>
#define SIZE 10

/*Used Function to Take Marks as Input For 10 Students*/
void marks_input(int marks[],int i)
{
   for(i=1;i<=10;i++)
   {
       printf("Enter Marks of %d Student (less than 20):", i);
       scanf("%d" ,&marks[i]);
        if(marks[i]>20)
           {
                printf("!!Enter Marks Less Than 20!!\n");
                i--;

            }
   }

}
//Function For Displaying Student Marks:
void marks_disp(int marks[],int i)
{
    printf("\n Marks Displayed :\n");
    printf("Student No\t Marks");
    for(i=1;i<=10;i++)
        {
            printf("\n%d\t\t\t  %d",i,marks[i]);

        }
}

/*Function For Sorting The Marks in Descending Order:*/
void sorting_marks(int marks[],int sort)
{
    int temp;

/*Using Nested Loops to Sort the marks in Descending order*/
 for (int sort=1;sort<=10;sort++)
        {
            for (int j=sort; j<=10;j++)
            {
                if (marks[sort] < marks[j])

                    {
                        temp = marks[sort];
                        marks[sort] = marks[j];
                        marks[j] = temp;
                    }

            }

        }

         printf("\n");

         printf("\nThe Numbers in descending order are : \n");

         printf("\n\nStudent No.\t Marks\n");

    /*printing marks in descending order*/
    for (int s=1;s<=10;++s)
        {
            printf("%d.\t\t\t %d\n",s,marks[s]);

        }

}
/*Created Separate function for Sum and Average*/
void marks_SUM(int marks[] , int size)
{
    int sum=0,i;
    float average=0;
    for(i=1;i<=size;i++)
    {
        sum+=marks[i];
    }
    printf("\nThe Total Marks of 10 Students are : %d",sum);
    //Finding Average Marks too
    average = sum/size;
    printf("\nThe Average Marks are : %.2f",average);

}
/*Using Percentage function to find perc of total marks*/
//Out of 200 Total Marks
void marks_per_cent(int marks[],int size){

    float percentage=0;
    //Calculating Sum of Marks
    int sum=0,i;

     for(i=1;i<=size;i++)
    {
        sum+=marks[i];
    }

    for(int p=1;p<=10;p++){

        percentage = ((float)sum/200)*100;
    }
     printf("\n\nTotal Percentage of Marks out of 200 : ");

        printf("\nThe Total Percentage is: %.2f%%\n",percentage);
        printf("\n_________________________________________");
        printf("\n\n\n");


}
int main()
{
    //Calling all Functions Here in Main Function
    int marks[SIZE] = {0};
    marks_input(marks,SIZE);
    marks_disp(marks,SIZE);
    sorting_marks(marks,SIZE);
    marks_SUM(marks,SIZE);
    marks_per_cent(marks,SIZE);




   return 0;
}

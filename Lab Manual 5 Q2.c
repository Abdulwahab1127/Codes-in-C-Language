#include<stdio.h>
#define  SIZE  10
int getArray(int el[],int size);
int  getEven(int el[] , int size);

int main()
{

    int el[SIZE] = {0};
    getArray(el,SIZE);
    getEven(el,SIZE);



}

int getArray(int el[],int size)
{
 int i;

    printf("Enter %d Array : \n", size);

    printf("\n");

 for(i=0;i<5;i++)
     {
         printf("Enter the %d Array : ", i+1 );
         scanf("%d", &el[i]);

     }

     printf("\n");
     for(i=0;i<10;i++)
     {
         printf("%d\t" , el[i]);
     }
     printf("\n");
     printf("__________________________________________");
}

int getEven(int el[] , int size)
{
    int i;
    printf("\nEven Numbers:\n ");

    for(i=0;i<SIZE;i++)
    {
        if(el[i]%2==0)
        {
            printf("%d\t" ,el[i]);
        }

    }


    printf("\n");
    printf("____________________________________________");

}

int modifyArray(int el[],int size)
{






}

#include<stdio.h>
#define SIZE 10

int sumMarks(const int [] ,int);
void getMarks(int st[] ,int);
void showMarks(int st[] ,int);
int sort(int st[],int);
int binarySearch(int [],int,int,int);

int main()
{
    int found,no, i;
    int st[SIZE];
    //getMarks(st ,SIZE);
    showMarks(st,SIZE);

    sumMarks(st,SIZE);
    printf("Enter Number to Find : ");
    scanf("%d" ,&no);

    printf("Total Marks are = '%d' \n",sumMarks(st,SIZE));
    printf("Sorted numbers are = %d",sort(st,SIZE));




    return 0;

}

void getMarks(int st[] ,int size)
{
    int i;

    printf("Enter %d Marks : \n" , size);
    for(i=0;i<size;i++)
    {
        printf("Marks %d :" ,i+1);
        scanf("%d" , &st[i]);
    }
}

int sumMarks(const int st[],int size)
{

    int i,total=0;
    for(i=0;i<size;i++)
    total+=st[i];

    return total;
}

void showMarks(int st[] ,int size)
{
    int i;
    printf("\n %d Marks : \n",size);

    for(i=0;i<size;i++)
    {
        printf("Marks %d : %d \n",i+1,st[i]);
    }

}

int sort(int st[], int size)
{
    int i,hold = 0,pass, k;

    for(pass=0;pass<SIZE;pass++)
    {
        for (i=0;i<SIZE-1;i++)
        {
            if(st[i]>st[i+1])
            {
                hold =st[i];
                st[i]= st[i+1];
                st[i+1] = hold;
            }
        }
    }
    for(k = 0; k<SIZE; k++)
    {
        printf("%d\n",st[k]);
    }

}
int binarySearch(int st[],int key,int L,int U)
{
    int M;
    while(L<=0)
    {
        if(key==st[M])
        {
            return M;
        }else if(key>st[M])
        {
            L =M+1;
        }else
        {
            U =M-1;
        }
    }
    return -1;

}

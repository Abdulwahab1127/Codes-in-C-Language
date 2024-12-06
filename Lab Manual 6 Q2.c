#include<stdio.h>
int main()
{


int i;
int array[10]={2,6,-4,8,10,-12,14,16,18,20};
int Ptr[]={2,6,-4,8,10,-12,14,16,18,20};
//Using Loop

    printf("\n\n");
for(int i=0;i<10;i++)
{
    printf("\t%d",array[i]);
}
    printf("\n\n");
for(int i=0;i<10;i++)
{
    printf("\t%d",Ptr[i]);
}
    printf("\n\n");
for(int i=0;i<10;i++)
{
    printf("\t%d",*(array+i));
}
    printf("\n\n");
for(int i=0;i<10;i++)
{
    printf("\t%d",*(Ptr+i));
}
printf("\n\n");




    int *ptr;
    ptr = &array[0];
    ptr=array;

    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;
    printf("\t%d" ,*ptr);
    ptr++;

    printf("\n\n");
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

typedef struct{

    int ID;
    char Name[20];
    int age;
    char School[50];

}std;

void input_takin(std students[])
{
    int i;

    for(i=1;i<3;i++)
    {
        printf("\n\n\t\tStudent No %d:",i);
        printf("\n\n\t\tEnter Student ID:");
        scanf("%d",&students[i].ID);
        printf("\n\t\tEnter Student Name:");
        scanf("%s",&students[i].Name);
        printf("\n\t\tEnter Student Age:");
        scanf("%d",&students[i].age);
        printf("\n\t\tEnter Student School:");
        scanf("%s",&students[i].School);

    }
}

void input_diss(std students[])
{
    int i;

    for(i=1;i<3;i++)
    {
        printf("\n\n\t\tStudent No: %d",i);
        printf("\n\n\t\tStudent ID: %d",students[i].ID);
        printf("\n\t\tStudent Name: %s",students[i].Name);
        printf("\n\t\tStudent Age : %d",students[i].age);
        printf("\n\t\tStudent School: %s",students[i].School);

    }
}

void input_search(std students[])
{
    int i;
    char namee[20];

    printf("\n\t\tName The Student You Want to Know About:");
    scanf("%s",&namee);


    for(i=1;i<3;i++)
    {
        if(strcmp(namee,students[i].Name)==0)
        {
            printf("\n\n\t\tStudent No: %d",i);
            printf("\n\n\t\tStudent ID: %d",students[i].ID);
            printf("\n\t\tStudent Name: %s",students[i].Name);
            printf("\n\t\tStudent Age : %d",students[i].age);
            printf("\n\t\tStudent School: %s",students[i].School);

        }
    }
}

void input_modify(std students[])
{
    int i,idd=0;

    printf("\n\t\tEnter Name of the student who's Info You want to Modify:");
    scanf("%s",&idd);

    for(i=1;i<3;i++)
    {
        if(strcmp(idd,students[i].ID)==0)
        {
            printf("\n\n\t\tStudent No %d:",i);
            printf("\n\n\t\tEnter Student ID:");
            fflush(stdin);
            scanf("%d",&students[i].ID);
            printf("\n\t\tEnter Student Name:");
            fflush(stdin);
            gets(students[i].Name);
            printf("\n\t\tEnter Student Age:");
            scanf("%d",&students[i].age);
            printf("\n\t\tEnter Student School:");
            fflush(stdin);
            gets(students[i].School);

        }

    }
}




int main()
{
    int num,z=0;
    std students[5];

    while(z==0)

    {

        printf("\n\n\n\t\t'Welcome To The Student Info System'");
        printf("\n\t\t'Press 1 To Enter Student Info'");
        printf("\n\t\t'Press 2 Display Students Info'");
        printf("\n\t\t'Press 3 Search Student Info'");
        printf("\n\t\t'Press 4 Modify Student Info'");
        printf("\n\t\t'Press 5 To Exit The Program'");
        printf("\n\t\t'Your Choice'");
        scanf("%d",&num);

    switch(num)
        {

        case 1:
            {
                system("CLS");
                input_takin(students);
                break;
            }

        case 2:
            {
                system("CLS");
                input_diss(students);
                break;
            }
        case 3:
            {
                system("CLS");
                input_search(students);
                break;

            }
        case 4:
            {
                system("CLS");
                input_modify(students);
                break;
            }
        case 5:
            {
                z=1;
                break;
            }

        }



    }



}


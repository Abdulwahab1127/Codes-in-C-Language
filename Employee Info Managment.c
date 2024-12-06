#include<stdio.h>
#include<string.h>
typedef struct{
    int emp_id;
    int emp_age;
    char emp_name[50];
    char emp_lname[50];
    int emp_salary;
    char emp_gen;
}emp;
void add_employee(emp employee[]);
void disp_employee(emp employee[]);
void search_employee(emp employee[]);
void display_older_employees(emp employee[]);
int main(){
    emp employee[5];
    int num, z=0;;

while(z==0){
    printf("\n\t1. Add Employee Details\n");
    printf("\t2. Display Employee Details\n");
    printf("\t3. Search an Employee Details\n");
    printf("\t4. Display the total number of employees with age 50+\n");
    printf("\t5. Exit\n");
    printf("Enter your option: ");
    scanf("%d", &num);
    switch(num){
    case 1:
        {add_employee(employee);
        break;}
    case 2:
        {disp_employee(employee);
        break;}
    case 3:
        {search_employee(employee);
        break;}
    case 4:
        {display_older_employees(employee);
        break;}
    case 5:{
        z=1;
        break;}
    }
}
    printf("The program Exited Successfully");
    return 0;
}

void add_employee(emp employee[]){
    for(int i=0 ; i<5 ; i++){
        printf("\nEnter Employ %d Details: \n", i+1);

        printf("Enter Id: ");
        scanf("%d", &employee[i].emp_id);

        printf("Enter Age: ");
        scanf("%d", &employee[i].emp_age);

        printf("Enter First Name: ");
        scanf("%s", &employee[i].emp_name);

        printf("Enter Last Name: ");
        scanf("%s", &employee[i].emp_lname);

        printf("Enter Salary: ");
        scanf("%d", &employee[i].emp_salary);
        printf("Enter Gender (M/F): ");
        employee[i].emp_gen = getche();

        printf("\n\n");
    }
    printf("No more space for storing employees\n");
}

void disp_employee(emp employee[]){
    for(int i=0 ; i<5 ;i++){
        printf("\n\nEmploy %d is:", i+1);
        printf("\nID: %d", employee[i].emp_id);
        printf("\nAge: %d", employee[i].emp_age);
        printf("\nName: %s", employee[i].emp_name);
        printf("\nLast Name: %s", employee[i].emp_lname);
        printf("\nSalary: %d", employee[i].emp_salary);
        printf("\nGender: %c\n", employee[i].emp_gen);
    }
}

void search_employee(emp employee[]){
    char name[50];
    printf("\nEnter First Name: ");
    scanf("%s", &name);
    for(int i=0 ; i<5 ;i++){
        if(strcmp(name, employee[i].emp_name)==0){
            printf("\n\n Employee: %d ", i+1);
            printf("\nID: %d", employee[i].emp_id);
            printf("\nAge: %d", employee[i].emp_age);
            printf("\nName: %s", employee[i].emp_name);
            printf("\nLast Name: %s", employee[i].emp_lname);
            printf("\nSalary: %d", employee[i].emp_salary);
            printf("\nGender: %c\n", employee[i].emp_gen);
        }
    }
}

void display_older_employees(emp employee[]){
   int t=0;
   for(int i=0 ; i<5 ; i++){
    if(employee[i].emp_age>50)
        t++;
    }
    printf("\nThere are %d older employees", t);
}

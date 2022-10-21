#include <stdio.h>
#include <stdlib.h>
struct Emp_struct{
int id;
float salary,bonus,deduction;
char name[10];
};

int main()
{
    struct Emp_struct myEmp;

    do{
    printf("enter employee data:\n");
    printf("id: ");
    scanf("%d",&myEmp.id);
    fflush(stdin);
    printf("Name: ");
    gets(myEmp.name);
    printf("salary: ");
    scanf("%f",&myEmp.salary);
    printf("bonus: ");
    scanf("%f",&myEmp.bonus);
    printf("deductions: ");
    scanf("%f",&myEmp.deduction);

    printf("\n salary of (%s) , ID (%d) = %f \n",myEmp.name,myEmp.id,myEmp.salary+myEmp.bonus-myEmp.deduction);
    }while(getch() != 27);

    return 0;
}

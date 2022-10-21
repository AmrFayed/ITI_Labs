#include <stdio.h>
#include <stdlib.h>
struct Emp_struct{
int id;
float salary,bonus,deduction;
char name[10];
};
void displayEmp(struct Emp_struct);

struct Emp_struct addEmp(){
    struct Emp_struct myEmp;
    printf("enter employee data:\n");
    printf("id: ");
    scanf("%d",&myEmp.id);
    _flushall();
    printf("Name: ");
    gets(myEmp.name);
    printf("salary: ");
    scanf("%f",&myEmp.salary);
    printf("bonus: ");
    scanf("%f",&myEmp.bonus);
    printf("deductions: ");
    scanf("%f",&myEmp.deduction);
    return myEmp;
};

int main()
{
    struct Emp_struct myEmp;

    do{
    myEmp = addEmp();
    displayEmp(myEmp);

    }while(getch() != 27);

    return 0;
}
void displayEmp(struct Emp_struct myEmp){
    printf("\n salary of (%s) , ID (%d) = %f \n",myEmp.name,myEmp.id,myEmp.salary+myEmp.bonus-myEmp.deduction);
}

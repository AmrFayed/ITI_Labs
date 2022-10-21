#include <stdio.h>
#include <stdlib.h>

struct Emp_struct{
int id;
float salary,bonus,deduction;
char name[10];
};

struct Dep_struct{
int id;
struct Emp_struct employees[10];
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
    printf("press any key to continue....press (esc) to leave.\n");
    return myEmp;
};

int main()
{
    struct Dep_struct myDp;
    struct Emp_struct myEmp[10];
    int i =0,SIZE=0;
    float temp;
    do{
    myEmp[i] = addEmp();
    i++;
    SIZE++;
    }while(getch() != 27 && i<10);


    int id;
    do{
    system("cls");
    printf("enter employee id to look for: ");
    scanf("%d",&id);
    i=0;
    while(myEmp[i].id!= id && i<SIZE)
        i++;
    if (i>=SIZE){
        printf("Wrong id!\n");
        continue;
    }
    displayEmp(myEmp[i]);

    }while(getch()!='0');




return 0;
}

void displayEmp(struct Emp_struct myEmp){
    printf("\n salary of (%s) , ID (%d) = %f \n"
           "press any key to continue....press (0) to leave.\n",myEmp.name,myEmp.id,myEmp.salary+myEmp.bonus-myEmp.deduction);
}

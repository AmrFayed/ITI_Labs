#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct Emp_struct{
int id;
float salary,bonus,deduction;
char name[10];
};

int main()
{
    printf("Welcome, please enter data of your (%d) employees\n",SIZE);
    struct Emp_struct myEmp[SIZE];
    int i =0;
    float temp;
    do{
    printf("enter employee %d data:\n",i+1);
    printf("id: ");
    scanf("%d",&myEmp[i].id);
    fflush(stdin);
    printf("Name: ");
    gets(myEmp[i].name);
    printf("salary: ");
    _flushall();
    scanf("%f",&myEmp[i].salary);
    printf("bonus: ");
    _flushall();
    scanf("%f",&myEmp[i].bonus);
    printf("deductions: ");
    _flushall();
    scanf("%f",&myEmp[i].deduction);
    i++;
    }while(i<SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("\n salary of (%s) , ID (%d) = %f \n",myEmp[i].name,myEmp[i].id,myEmp[i].salary+myEmp[i].bonus-myEmp[i].deduction);

    }
return 0;
}

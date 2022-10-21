#include <stdio.h>
#include <stdlib.h>
#include "MyLibrary.h"
#define HILIGHTED 0x70
#define NORMAL 0x07
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
    return myEmp;
}
int main()
{
    char str[10];
    int i=0;
    char c;
    printf("This function will read your name as a sequence of character and convert it to a string.\n"
           "Please Enter your name: ");
    do{
            c = getche();
            str[i++] = (c==13)? '\0':c;
    }while(i<10 && c != 13);
    printf("\nWelcome, %s. \n",str);
    getch();

    clrscr();

    char d;
    do{
    printf("\nEnter character to check ASCII code:");
    c = getche();
    switch(c)
        {
        case -32:
            d = getche();
            printf("\nThe input character (%d %d) is an extended character \n", c, d);
            break;
        default:
            printf("\nThe input character (%d) is a normal character \n", c);
            break;
        }
        printf("\ntry again (enter/esc)?");
        }while(getch()!=27);
    getch();
    clrscr();
    char first[10],last[10],full[20];
    printf("Enter your first name: ");
    gets(first);
    printf("Enter your last name: ");
    gets(last);
    strcpy(full,first);
    strcat(full," ");
    strcat(full,last);
    printf("your full name is: ");
    puts(full);

    getch();
    clrscr();
    printf("Next comes a menu window, you can use arrows,home,end,tab to navigate and visit multiple sub-menus");
    getch();
    clrscr();
    char menu[3][8]={"New","Display","Exit"};
    int  current = 0, flag = 0;
    do{
        clrscr();
        gotoxy(0, 0);
        printf("Menu: \n");
        for(i = 0; i < 3; i++)
        {
            if(i == current)
            {
                textattr(HILIGHTED);
            }
            else
            {
                textattr(NORMAL);
            }
            gotoxy(5,(i)*2+2);
            printf("%s",menu[i]);
        }
        c = getch();
        switch(c)
        {
        case -32:
            c = getch();
            switch(c)
            {
            //down
            case 80:
                current=(current+1)%3;
                break;
            //up
            case 72:
                current=(current-- < 0)? 3-1:current;
                break;
            //home
            case 71:
                current = 0;
                break;
            //end
            case 79:
                current = 3-1;
                break;
            }
        break;
        //tab
        case 9:
            current=(current+1)%3;
            break;
        //escape
        case 27:
            flag = 1;
            break;
        //enter
        case 13:
            if(current == 3-1)
            {
                flag = 1;
            }
            else if(current == 0)
            {
                clrscr();
                printf("This is the new menu\n");
                getch();
            }
            else if(current == 1)
            {
                clrscr();
                printf("This is the display menu\n");
                getch();
            }
        }

        textattr(NORMAL);
    } while(flag == 0);

    clrscr();
    _flushall();
    printf("This function will take a string and a char and count the occurrences of the char in the string.\n");
    printf("Enter string:");
    gets(str);
    printf("Enter char:");
    c=getche();
    int cou =0;
    i=0;
    while(str[i]!='\0' && i<10)
        if(str[i++]== c)
            cou++;

    printf("\n (%c) repeated %d times \n",c,cou);

    getch();
    clrscr();
    char str2[10];
    printf("This function copies strings using array implementation.\n");
    printf("Enter first string:");
    _flushall();
    gets(str);
    _flushall();
    printf("Enter second string:");
    gets(str2);
    for(i=0;i<10;i++){
        str[i]=str2[i];
    }
    printf("string 2 copied in string 1 : %s",str);

    getch();
    clrscr();
    printf("This function is a manual implementation to find the string length.\n");
    printf("Enter string:");
    _flushall();
    gets(str);
    i=0;
    do{
        i++;
    }while(str[i]!='\0');
    printf("Length of string : %d",i);

    getch();
do{    clrscr();
    _flushall();
    char str2[10];
    printf("This function removes non-alphabetical chars from a string. \n");
    printf("Enter string:");
    gets(str);
    int j=0;
    i=-1;
    while(str[++i]!='\0'){
        if( str[i]<'A'|| (str[i] >'Z'  && str[i] < 'a') || str[i]>'z')
          continue;
       str2[j++]=str[i];
    }
    str2[j]='\0';
    puts(str2);
}while(getch() == 13);
    return 0;
}

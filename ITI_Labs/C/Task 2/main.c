#include <stdio.h>
#include <stdlib.h>
#include"MyLibrary.h"

int main()
{
    printf("(1)Enter numbers, i will stop when sum >= 100 :D\n");
        int n,sum=0;
        do{
            printf("enter number: ");
            scanf("%d",&n);
            sum += n;
        }
        while(sum < 100);
        printf("sum = %d \n",sum);

        refresh();

        char c = 'a';
        do{
        clrscr();
        printf("2)Choose from my custom menu: \n"
               "a)Good morning \n"
               "b)Good evening \n"
               "c)Good afternoon \n"
               "d)Exit \n");
        c = getch();
        switch (c){
        case 'a':
            clrscr();
            printf("Good morning \n");
                   c = getch();

            break;
        case 'b':
            clrscr();
            printf("Good evening \n");
                   c = getch();
            break;
        case 'c':
            clrscr();
            printf("Good afternoon \n");
                c = getch();
            break;
        case 'd':
            clrscr();
            printf("Goodbye! \n");
            getch();
            break;
        default:
            clrscr();
            printf("Invalid choice. \n");
                   c = getch();
            break;
        }
        } while(c != 'd');


    do{
    clrscr();
        printf("3)enter odd magic box size:");
        int r=1;
        int co=1;
        int i;

        scanf(" %i",&n);
        if(n%2 !=0){
        co = n/2+1;
        //clrscr();
        for (i= 1; i <= n*n; i++){
            gotoxy(co*3+3,r*3+3);
            printf("%i",i);
            if(i%n ==0) r=(r==n)?1:r+1;
            else {
                    r=(r==1)? n:r-1;
                    co=(co==1)? n:co-1;
            }

        }
        }
        else
            printf("you entered an even number!");
    printf("\n\n try another? (y/n)");

    }while(getch() =='y');

    refresh();

    int n1,n2,n3;
    printf("4)Enter 3 numbers to get max: ");

    scanf("%d %d %d",&n1,&n2,&n3);
    printf("Largest number is: ");
    if(n1>n2)
        if(n1>n3) printf("%d",n1);
        else printf("%d",n3);
    else
        if(n2>n3) printf("%d",n2);
        else printf("%d",n3);

    refresh();

    printf("Enter an integer to get its multiples: ");
    scanf("%i",&n);
    int i;
    for (i=0; i<13;i++)
        printf("%d * %d = %d \n",n,i,n*i);


    refresh();

    printf("Enter a character to look for in alphabets: ");
    scanf(" %c",&c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabetical char.", c);
    else
        printf("%c is not an alphabetical char.", c);

    refresh();
}
void refresh(){
    getch();
    system("cls");
    _flushall();
}



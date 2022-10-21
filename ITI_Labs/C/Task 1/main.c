#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World! \n");

    refresh();

    char c;
    printf("Enter a char to get ASCII:");
    scanf("%c",&c);
    printf("ASCII of %c is %d",c,c);

    refresh();

    float f;
    printf("Enter float number to be printed: ");
    scanf("%f",&f);
    printf("you entered: %f \n",f);

    refresh();

    int i1;
    int i2;
    printf("Enter number to get hexa: ");
    scanf(" %d",&i1);
    printf("Hexa of %d is %x \n",i1,i1);

    refresh();
    float f1;
    float f2;
    printf("Welcome to my simple calculator\n");
    printf("Enter first number: ");
    scanf("%f",&f1);
    printf("Enter second number: ");
    scanf("%f",&f2);



    char op;
    printf("Type +,-,/,* : ");
    scanf(" %c",&op);

     switch (op)
    {
    case '+':
        printf("Sum: %.3f\n",f1+f2);
        break;
    case '-':
        printf("difference: %.3f\n",f1-f2);
        break;
    case '*':
        printf("product: %.3f\n",f1*f2);
        break;
    case '/':
        printf("division: %.3f\n",f1/f2);
        break;
    default:
        printf("Wrong choice");
    }

    refresh();

    printf("Welcome to my fraction transformer\n");
    printf("Enter first integer: ");
    scanf("%d",&i1);
    printf("Enter second integer: ");
    scanf("%d",&i2);
    int qou;
    int rem;
    qou = i1/i2;
    rem = i1%i2;
    printf("fraction (%d/%d) = %i %i/%i",i1,i2,qou,rem,i2);



}
void refresh(){
    getch();
    system("cls");
    _flushall();
}

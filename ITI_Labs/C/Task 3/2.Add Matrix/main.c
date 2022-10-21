#include <stdio.h>
#include <stdlib.h>
#include "MyLibrary.h"
#define ROWS 3
#define COLS 4
int main()
{
    int i,j;
    float arr2[ROWS][COLS];
    int arr21 [ROWS][COLS];

    printf("enter 2 matrices to add: \n"
           "Please enter first matrix: \n");
    for (i=0;i<ROWS;i++)
    {
        for (j=0;j<COLS;j++)
        {
        gotoxy(j*3+2,i*3+2);
        scanf("%d",&arr21[i][j]);
        }
    }

    int arr22 [ROWS][COLS];
    printf("\nPlease enter second matrix: \n");
    for (i=0;i<ROWS;i++)
    {
        for (j=0;j<COLS;j++)
        {
        gotoxy(j*3+2,i*3+ROWS*4);
        scanf("%d",&arr22[i][j]);
        }
    }
    printf("\n Sum of matrices: \n");
    for (i=0;i<ROWS;i++)
    {
        for (j=0;j<COLS;j++)
        {
        gotoxy(j*3+2,i*3+ROWS*8);
        printf("%d",arr21[i][j]+arr22[i][j]);
        }
    }

    getch();



    return 0;
}

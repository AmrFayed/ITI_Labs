#include <stdio.h>
#include <stdlib.h>
#include "MyLibrary.h"
#define ROWS 3
#define COLS 4
int main()
{
    int i,j;
    float arr2[ROWS][COLS];
    float max = -99999999999999;
    float min = -max;
    float sum[ROWS];
    float sumc[COLS];
    for(j=0;j<COLS;j++) sumc[j]=0;
    printf("Enter exam data for your %d students x %d subjects\n",ROWS,COLS);
    for (i=0;i<ROWS;i++)
    {
        printf("Enter student [%d] marks:\n",i+1);
        sum[i]=0;
        for (j=0;j<COLS;j++)
        {
            printf("Subject [%d]:",j+1);
            scanf("%f",&arr2[i][j]);
            max = (max > arr2[i][j])? max:arr2[i][j];
            min = (min<arr2[i][j])? min:arr2[i][j];
            sum[i]+=arr2[i][j];
            sumc[j] += arr2[i][j]/ROWS;
        }
        printf("Sum of marks for student [%d] = %.2f\n\n",i+1,sum[i]);

    }
    printf("\n");
    for (i=0;i<COLS;i++)
        printf("Average marks of subject [%d] = %.2f\n",i+1,sumc[i]);

    getch();




    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "MyLibrary.h"
#define ROWS 5

int main()
{
    int arr[12];
    int cols[ROWS]={2,2,3,3,2};
    int i,j,n,l;
    l=0;
    printf("This is a %d-row jagged array \n"
           "enter 5 integers as row sizes then press enter:",ROWS);
    _flushall();
    for(i=0;i<ROWS;i++){
        scanf("%i",&cols[i]);
    }
    printf("enter matrix:\n");
    for(i=0;i<ROWS;i++){
            n=cols[i];
        for(j=0;j<n;j++){
            //printf("enter %d,%d:", i,j);
            gotoxy(j*3+2,i*2+3);
            scanf("%d",&arr[l++]);

        }
    }
    printf("\n output matrix");
    l=0;
    for(i=0;i<ROWS;i++){
            n=cols[i];
        for(j=0;j<n;j++){
            gotoxy(j*3+2,i*2+ROWS*3);
            printf("%d",arr[l++]);
        }
    }


    return 0;
}

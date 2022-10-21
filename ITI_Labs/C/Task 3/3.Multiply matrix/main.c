#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int x, int y)
{
    COORD coordinate;
    coordinate.X = x;
    coordinate.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
}
int main()
{
    int r1,c1,r2,c2,i,j;
    printf("Enter matrix 1 size:");
    scanf("%d %d",&r1,&c1);

    int arr1[r1][c1];
    printf("Enter elements: \n");
    for(i=0;i<r1;i++)
        for(j=0;j<c1;j++){
            gotoxy(j*2+2,i*2+2);
            scanf("%d",&arr1[i][j]);
    }
    system("cls");
    printf("Enter matrix 2 size:");
    scanf("%d %d",&r2,&c2);

    int arr2[r2][c2];
    printf("Enter elements: \n");
    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++){
            gotoxy(j*2+2,i*2+2);
            scanf("%d",&arr2[i][j]);
        }
    system("cls");

    if(c1 != r2){
        printf("Incompatible sizes!");
    }
    else{
        printf("Matrix multiplication result:\n");
        int arr3[r1][c2];
        int temp,k;
        for(i=0;i<r1;i++){
            for(k=0;k<c2;k++){
                temp = 0;
                for(j=0;j<c1;j++){
                    temp += arr1[i][j]*arr2[j][k];
                }
                arr3[i][k]=temp;
                gotoxy(k*4+2,i*3+2);
                printf("%d",temp);
            }
        }
    }
    getch();

}

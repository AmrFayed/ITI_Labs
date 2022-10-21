#include <stdio.h>
#include <stdlib.h>
#define HIGHLIGHT 0x20
#define NORMAL 0x07
#include "MyLibrary.h"
void swap(char* x,char* y){
    char temp = *x;
    *x=*y;
    *y=temp;
}
void pushBack(char* x){
    *(x) = *(x+1);
}
void high(int x,int y,int start,int size){
    textattr(HIGHLIGHT);
    int i;
    for(i=start;i<size;i++){
        gotoxy(x+i,y);
        printf(" ");
    }
    textattr(NORMAL);
    gotoxy(start+x,y);
}
void printArr(char* arr,char* end){
    clrscr();
    textattr(NORMAL);
    printf("Write text max 10 chars:");
    textattr(HIGHLIGHT);
    int i =0;
    while(arr<end){
        gotoxy(3+i++,3);
        printf("%c",*arr++);
    }
    textattr(NORMAL);
}
int main()
{
    char str[10];
    char* i = str;
    char* cou = str;
    char* j;
    char c;
    printf("Write text max 10 chars:");
    high(3,3,0,10);

    //textattr(HILIGHTED);
    do{
        //gotoxy(3+i,3);

        c = getch();
        switch (c){
        case -32:
            switch(getch()){
            //home
            case 71:
                i = str;
                break;
            //end
            case 79:
                i = cou;
                break;
            //left arrow
            case 75:
                i=(i-1 > str)? i-1:str;
                break;
            //right arrow
            case 77:
                i=(i+1 > cou)? cou:i+1;
                break;
            //delete
            case 83:
                if(i>=cou)
                    break;
                for(j=i;j<cou;j++){
                    pushBack(j);
                    }
                cou=(cou-1 > str)? cou-1:str;
                break;
            }
            break;
        //backspace
        case 8:
             for(j=(i-1);j<cou;j++){
                pushBack(j);
                }
            i=(i-1 > str)? i-1:str;
            cou=(cou-1 > str)? cou-1:str;
            break;
        //ENTER
        case 13:
            break;
        //ESCAPE
        case 27:
            break;

        default:
            *i = c;
            if(i<str+10){
                    i++;
                   if(i>cou)
                    cou++;

                    }
             break;
        }
        printArr(str,cou);
        high(3,3,cou-str,10);
        gotoxy(3+i-str,3);
    }while(c != 27 && c!= 13);
    gotoxy(3,7);
    printf("you entered: ");
    i=str;
    int o=0;
    while(i<cou){
        gotoxy(3+o++,8);
        printf("%c",*i++);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int max(int,int,int);

int main()
{
    int a,b,c;
    do{
        printf("enter 3 numbers :");
        scanf("%d %d %d",&a,&b,&c);
        printf("Max is %d \n",max(a,b,c));
    }while(getch()!= 27);

    return 0;
}
int max(int a,int b,int c){
    int rslt;
    rslt = (a > b)? a:b;
    rslt = (rslt>c)? rslt:c;
    return rslt;
}

#include <stdio.h>
#include <stdlib.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Please enter a b: ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("(a,b) after swap (%d,%d)",a,b );

    return 0;
}

void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

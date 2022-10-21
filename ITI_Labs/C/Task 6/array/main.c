#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3];
    int* ptr = arr;
    int i =0;

    for(i=0;i<3;i++){
        printf("Enter number to array: ");
        scanf("%d",&ptr[i]);
    }
     for(i=0;i<3;i++){
        printf("Element [%d] in array: %d \n",i+1,*(ptr++));
    }


    return 0;
}

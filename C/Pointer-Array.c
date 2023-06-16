#include<stdio.h>
#include<conio.h>

void main(){

    int array[5] = {2,4,5,6};
    int *arrayPointer  = &array;

    /*
    * Pointer of array, shows the address of first element in array
    * We can also access array elements through pointer
    */

   printf("Address of Pointer - %p\n",arrayPointer);
   printf("Address of First element of Array - %p\n",&array[0]);


    /* Accessing array elements through array pointer*/
    printf("\nelement 1 - %d",*arrayPointer);
    printf("\nelement 2 - %d\n",*(arrayPointer + 1));
}
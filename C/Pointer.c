#include<stdio.h>
#include<conio.h>

void main(){
    int x = 10; // Declaring variable
    int *pointer ; // Declaring pointer
    pointer = &x; // Storing address of variable 'a' in pointer
    int **pointerAddress = &pointer; // Stroing address of pointer pointing to address of variable 'a'


    printf("Value of variable x -> %d", x);
    printf("\nAddress of varible x -> %p", pointer);
    printf("\nAddress of pointer of variable x -> %p", pointerAddress);


    /* Changing Value of a variable throught pointer*/

    *pointer = 500; // ponting back to variable through pointer

    printf("\nNew Value of variable x -> %d",x);
}
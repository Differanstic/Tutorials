#include<stdio.h>
#include<conio.h>

void main(){

    int x = 10; // Declaring variable
    int *pointer ; // Declaring pointer
    pointer = &x; // Storing address of variable 'a' in pointer
    int **pointerAddress = &pointer; // Stroing address of pointer pointing to address of variable 'a'

    printf("Value of variable x -> %d\n", x);
    printf("Address of varible x -> %p\n", pointer);
    printf("Address of pointer of variable x -> %p\n", pointerAddress);


    /* Changing Value of a variable throught pointer*/
    *pointer = 500; // ponting back to variable through pointer
    printf("New Value of variable x -> %d",x);

}
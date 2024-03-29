#include<stdio.h>
#include<conio.h>

void main(){

    // Basic Datatypes in C

    int i;
    float f;
    char c;
    double d;

    // Creating Constants
    const float PIE = 3.14f;
    // Const variable cannot be reassigned -> pie = 2f will create area


    // Assinging values to variable
    i = 10;
    f = 23.4f;
    c = 'g';
    d = 122243342343.54543344;

    //printing values of variable (Format Specifier)
    /*
        * int - %d
        * float - %f
        * char - %c
        * char[] - %s
        * pointer - %p
        * double - %lf 
    */



    printf("int(integer) - %d\n",i);
    printf("float - %f\n",f);
    printf("double - %lf\n", d);
    printf("char (character) %c\n", c);
    printf("Const - %f",PIE);


    /*
    Printing value with decimal precision (Round-up the decimal number)

    * %.1f to print only one digit after decimal
    * %.2f to print only two digits after decimal

    * for float use f 
    * for double use lf
    */
    
    double g = 3.14159265359;
    printf("\n%.1lf",g);// output 3.1
    printf("\n%.6lf",g); // 3.14593 
    
    
}
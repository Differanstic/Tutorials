#include<stdio.h>
#include<stdio.h>



// Function Defination
int sum(int x, int y){
    int s = x + y;
    return s;
}


// Function Declartion
int area(int l , int h, int b);

void main(){

    // function usage
    int x = sum(3,4);
    int y = area(3,4,5);

    printf("Sum = %d || area = %d\n", x, y);


    // function shorthand usage
    printf("Sum = %d || area = %d", sum(3,4), area(3,4,5));

}


//Function Defination
int area(int l, int h, int b){
    return l*b*h;
}
#include<stdio.h>
void main(){
    int n = 12;

    if( n % 2 == 0){ // -> Condition
        // -> If Condition is True
        printf("N is Even\n");
    }else{
        // -> If Condition is False
        printf("N is Odd\n");
    }

    // Short-Hand for If Else
    // 1 Method
    if( n % 2 == 0) printf("N is Even\n");
    else printf("N is Odd\n");

    // 2 Method
    n % 2 == 0 ? printf("N is Even") : printf("N is Odd");
}
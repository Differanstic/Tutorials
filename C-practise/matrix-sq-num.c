#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int sq = pow(2,n);
    printf("Characters -> %d \n",sq);
    int len = (sq / 4 ) + 1;
    printf("Length of sqauare -> %d\n", len);

    int matrixValue(int x, int y , int n){
        if(x == 0 || y == 0){
            return n;
        }else{
            
        }
    }

    for(int y = 0 ; y < len ; y++){
        for(int x = 0 ; x < len; x++){
            printf("%d",n);
        }
        printf("\n");
    }
    return 0;
} 
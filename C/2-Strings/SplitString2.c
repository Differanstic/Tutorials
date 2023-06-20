#include<stdio.h>

void main(){
    char str[] = {"abc-bcd-cde-def"};
    char delim = '-';
    int startIndex = 0;
    int endIndex = 0;
    int tokenNumber = 0;
    char c[10][10] ;

    int len = sizeof(str);

    printf("Length of Array is - %d\n",len);

    for(int x = 0 ; x < len ; x++){
        if(str[x] == delim || str[x] == '\0'){
            endIndex = x;
            for(int y = 0; startIndex < endIndex ; y++){
                c[tokenNumber][y] =str[startIndex];
                startIndex++;
            }
            startIndex++;
            tokenNumber++;
        }
    }

    for(int z = 0; z<4 ; z++){
        for(int k = 0; k<3 ; k++)
            printf("%c",c[z][k]);
        printf("\n");
    }
}
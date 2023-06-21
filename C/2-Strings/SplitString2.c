#include<stdio.h>

void main(){
    char str[] = {"Himanshu,gajjar,1234"};
    const char delim = ',';
    int startIndex = 0;
    int endIndex = 0;
    int tokenNumber = 0;
    char c[10][15] ;
    char buffer1[15];
    char buffer2[15];
    char buffer3[15];

    int len = sizeof(str);

    printf("Length of Array is - %d\n",len);

    for(int x = 0 ; x < len ; x++){
        if(str[x] == delim || str[x] == '\0'){
            endIndex = x;
            for(int y = 0; startIndex < endIndex ; y++){
                switch(tokenNumber){
                    case 0:
                        buffer1[y] = str[startIndex];
                        break;
                    case 1:
                        buffer2[y] = str[startIndex];
                        break;
                    case 2:
                        buffer3[y] = str[startIndex];
                        break;
                }
                startIndex++;
            }
            startIndex++;
            tokenNumber++;
        }
    }


   
   printf("Buffer 1 -> %s \n",buffer1);
   printf("Buffer 2 -> %s \n",buffer2);
   printf("Buffer 3 -> %s \n",buffer3);

}
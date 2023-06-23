#include<stdio.h>
void main(){
    FILE *f;
    f = fopen("f.txt","w");
    char c;
    do{
        c = fgetc(f);
        printf("%c",c);
    }while(c != EOF);
    
}
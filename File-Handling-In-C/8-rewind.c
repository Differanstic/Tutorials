#include<stdio.h>
void main(){
    FILE *fp;
    fp = fopen("cluster-star.txt","r");
    char c = getc(fp);
    printf("%c",c);
    rewind(fp);// set Pointer to Begining of file
    c = getc(fp); 
    printf("%c",c);
    fclose(fp);
}
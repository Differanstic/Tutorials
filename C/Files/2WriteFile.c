#include<stdio.h>
void main(){

    FILE *f;

    // Write to File
    f = fopen("f2.txt","w");
    fprintf(f,"Hello World!");
    fclose(f);

    // Append to File
    f = fopen("f2.txt","a");
    fprintf(f,"\nThis is C File Systems");
    fclose(f);

}
#include<stdio.h>
void main(){
    FILE *f; // Creating file instance
    f = fopen("f1.txt","w");  // Creating a file
    printf("File Created Successfully!");
    fclose(f); // closing file to make sure its saved and clear the memory from ram
}
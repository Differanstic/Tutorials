#include<stdio.h>
void main(){
    FILE *f;

    // 1st Method
    char *s;
    f = fopen("f2.txt","r");
    while(fgets(s,1000,f))
        printf("%s",s);
    fclose(f);

    
    // 2nd Method using EOF (End of File)
    char c;
    f = fopen("f2.txt","r");
    do{
        c = fgetc(f);
        printf("%c",c);
    }
    while(c != EOF);
    fclose(f);
}
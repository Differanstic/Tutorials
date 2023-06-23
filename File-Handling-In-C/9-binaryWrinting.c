#include<stdio.h>

struct user
    {
        char name[20];
        int userId;
    };

void main(){
    struct user u1;
    gets(u1.name);
    u1.userId = 100;
    

    FILE *fp;
    fp = fopen("database.dat","wb+");
    fwrite(&u1,sizeof(struct user),1,fp);
    fclose(fp);
}
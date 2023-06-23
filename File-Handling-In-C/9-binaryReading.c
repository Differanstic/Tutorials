#include<stdio.h>

struct user
    {
        char name[20];
        int userId;
    };

void main(){
    struct user u1;

    FILE *fp;
    fp = fopen("database.dat","rb");
    fread(&u1,sizeof(struct user),1,fp);
    printf("User Name : %s\n", u1.name);
    printf("User ID : %d", u1.userId);
    fclose(fp);
}
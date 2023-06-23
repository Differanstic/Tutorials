#include<stdio.h>
void main(){
    int len;
    char *s;
    int f[]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s",s);
    len = sizeof(s);
    printf("%d\n",len);
    int x =0;
    while(*(s+x) != '/0'){
        switch (*(s+x))
        {
            case '0': f[0] = f[0] + 1; break;
            case '1': f[1] += 1; break;
            case '2': f[2] += 1; break;
            case '3': f[3] += 1; break;
            case '4': f[4] += 1; break;
            case '5': f[5] += 1; break;
            case '6': f[6] += 1; break;
            case '7': f[7] += 1; break;
            case '8': f[8] += 1; break;
            case '9': f[9] += 1; break;
            
            default:break;
        }
        x++;
    }

    for(int y = 0 ; y < 10; y++){
        printf("%d ",f[y]);
    }
}
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){

    char end = '\0';
    int i =0;
    while(*src != end && i < n){
        // int i_s=i+'0';
        // write(1,&i_s,1);
        *dest=*src;
        i++;
        src++;
        dest++;
    }
    return dest;
}
int main(){
    char src[5]="jelly";
    char dst[5]="wendy";
    ft_strncpy(&dst[0],&src[0],3);
    write(1,dst,5);
}
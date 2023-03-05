#include <unistd.h>

char *ft_strcpy(char *dest, char *src){

    char end = '\0';
    while(*src != end){
        // write(1,src,1);
        *dest=*src;
        src++;
        dest++;
    }
    return dest;

}
int main(){
    char src[4]="fak";
    char dst[4];
    ft_strcpy(&dst[0],&src[0]);
    write(1,dst,3);
}
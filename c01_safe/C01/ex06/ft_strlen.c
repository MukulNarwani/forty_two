#include <unistd.h>

int ft_strlen(char *str){
    char end = '\0';
    int counter =0;
    while(*str != end){
        counter ++;
        str++;
    }
    return counter;
}
int main(){
    char *a="habibi";
    int i = ft_strlen(a);
    i+='0';
    write(1,&i,1);
}
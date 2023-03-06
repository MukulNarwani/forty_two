#include <unistd.h>

void ft_putstr(char *str){
    char end='\0';

    while(*str != end){
        write(1,str,1);
        str++;
    }
}
int main(){
    char *a="hello a";
    ft_putstr(a);
}
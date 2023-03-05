#include <unistd.h>

int ft_str_is_numeric(char *str){
    char end='\0';
    while(*str != end){
        if ( !(*str >= 48 && *str <= 57)){
            return 0;
        }
        str++;
    }
    return 1;
}
int main(){
    char a[]="1 2";
    int alphahuh=ft_str_is_numeric(a) + '0';
    write(1,&alphahuh,1);
}
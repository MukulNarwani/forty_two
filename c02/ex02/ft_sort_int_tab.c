#include <unistd.h>


int ft_str_is_alpha(char *str){
    char end='\0';
    while(*str != end){
        if (!((*str >=65 && *str <= 90) || (*str >= 97 && *str <= 122))){
            return 0;
        }
        str++;
    }
    return 1;
}
int main(){
    char a[]="aasda1asdasd";
    int alphahuh=ft_str_is_alpha(a) + '0';
    write(1,&alphahuh,1);
}
#include <unistd.h>

int ft_str_is_uppercase(char *str){
    //97-122
    char end;
    end = '\0';
    int i;
    i = 0;
    while(*str != end)
    {
        if(!(*str <= 'Z' && *str >= 'A') && i > 0)
        {
            return 0;
        }
        str++;
        i++;
    }
    return 1;
}
int main(){
    char empty[]="";
    char space[]=" ";
    char normal[] = "asdd";
    char caps[]= "AASDDS";
    char mixed[] = "ASdad";

    int a=ft_str_is_uppercase(empty)+'0';
    int b=ft_str_is_uppercase(space)+'0';
    int c=ft_str_is_uppercase(normal)+'0';
    int d=ft_str_is_uppercase(mixed)+'0';
    int e=ft_str_is_uppercase(caps)+'0';


    write(1,&a,1);
    write(1,&b,1);
    write(1,&c,1);
    write(1,&e,1);
    write(1,&d,1);


}
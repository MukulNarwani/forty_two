#include <unistd.h>

ft_str_is_printable(){
    //97-122
    char end;
    end = '\0';
    int i;
    i = 0;
    while(*str != end)
    {
        if(!(*str >= 33) && i > 0)
        {
            return 0;
        }
        str++;
        i++;
    }
    return 1;

}
int main(){
    //test this one
    
}
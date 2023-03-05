#include <unistd.h>


void ft_strupcase(char *str)
{	
    if ((*str >= 'a') && (*str <= 'z'))
    {
        *str = *str - 32;
    }
}

void ft_strlowcase(char *str)
{
    if ((*str >= 'A') && (*str <= 'Z'))
    {
        *str = *str + 32;
    }
}

char *ft_strcapitalize(char *str){
    
    char end;
    int i;
    end='\0';
    i=0;
    while(*str != end)
    {
        if((i==0) || (*(str - 1) == ' ') || (*(str - 1) == '-')){
            ft_strupcase(str);
        }else{
            ft_strlowcase(str);
        }
        str++;
        i++;
    }
    return str;
}

int main(){
    char uncameled[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    //Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
    ft_strcapitalize(uncameled);
    write(1,uncameled,sizeof(uncameled));
}
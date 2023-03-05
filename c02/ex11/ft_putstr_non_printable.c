#include <unistd.h>

void int_to_hex(char *dst,int nb)
{
    char hex_units[16]="0123456789abcdef";
    int tens = nb / 16;
    int units = nb % 16;
    dst[0] = tens + '0';
    dst[1] = hex_units[units];
    // return dst;
}
void ft_putstr_non_printable(char *str)
{
    char end;
    end ='\0';

    while(*str != end)
    {
        if(*str<33)
        {
            int decimal_value = *str;
            char backslash='\\';
            char tmp_dst[2];
            int_to_hex(tmp_dst,decimal_value);
            write(1,&backslash,1);
            write(1,&tmp_dst,2);
        }
        else
        {
            write(1,str,1);
        }
        str++;
    }
}   
int main()
{
    // char dst[2];
    // int_to_hex(dst,12);
    // write(1,dst,2);
    char a[]="Adasd\nadas";
    ft_putstr_non_printable(a);
}
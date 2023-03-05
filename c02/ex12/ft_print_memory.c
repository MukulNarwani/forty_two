#include <unistd.h>

// void *ft_print_memory(void *addr, unsigned int size)
// {

// }

void int_to_hex(char *dst,uintptr_t nb)
{
    char hex_units[16]="0123456789abcdef";
    int tens = nb / 16;
    int units = nb % 16;
    dst[0] = tens + '0';
    dst[1] = hex_units[units];
    // return dst;
}

int main()
{
    int aba='a';
    // int arr[]=&aba;
    uintptr_t pt = (uintptr_t)&aba; 
    write(1,&pt,30);
}
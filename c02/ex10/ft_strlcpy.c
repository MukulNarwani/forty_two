#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;
    char end;
    end='\0';
    i=0;

    while(i<size)
    {   
        
        *dest=*src;
        i++;
        src++;
        dest++;
    }

    if(i==size && size>0)
    {
        *dest='\0';
    }
    return i;
}
int main()
{
    char dst[10];
    char src[10]="123456789";

    ft_strlcpy(dst,src,8);
    write(1,dst,7);
    //handle wrong size inputs
    // write(1,&src,5);
}
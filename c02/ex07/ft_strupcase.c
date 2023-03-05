#include <unistd.h>


char	*ft_strupcase(char *str)
{
    //97-122

	char	end;

	end = '\0';
	while (*str != end)
	{
		if ((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}
int	main(void)
{
    char a[]=" asda";
    char b[]=" AsdaA";
    char c[]="";
    char d[] = "ZZzz";

    ft_strupcase(a);
    ft_strupcase(b);
    ft_strupcase(c);
    ft_strupcase(d);
    write(1,a,5);
    write(1,b,6);
    write(1,c,1);
    write(1,d,4);
    return (0);
	//test this
}

#include <unistd.h>

char *ft_strlowcase(char *str){
    //97-122

	char	end;

	end = '\0';
	while (*str != end)
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
    return str;
}
int main(){
    char a[]=" asda";
    char b[]=" AsdaA";
    char c[]="";
    char d[] = "ZZzz";

    ft_strlowcase(a);
    ft_strlowcase(b);
    ft_strlowcase(c);
    ft_strlowcase(d);
    write(1,a,5);
    write(1,b,6);
    write(1,c,1);
    write(1,d,4);
    return (0);
}
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b){
    int i = *a;
    int j = *b;
    *a=i/j;
    *b=i%j;
}
int main(){
    int a=2;
    int b=5;
    ft_ultimate_div_mod(&a,&b);
    a= a+'0';
    b=b+'0';
    write(1,&a,1);
    write(1,&b,1);

}
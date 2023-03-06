#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = b%a;

}
int main(){
    int a=2;
    int b=5;
    int div;
    int mod;
    ft_div_mod(a,b,&div,&mod);
}
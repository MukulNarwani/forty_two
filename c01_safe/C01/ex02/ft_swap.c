#include <unistd.h>

void ft_swap(int *a, int *b){
    int i= *a;
    int j= *b;
    *a=j;
    *b=i;
    
}
int main(){
    int a= 42;
    int b=10;
    ft_swap(&a,&b);
    write(1,&a,1);
}
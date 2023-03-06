#include <unistd.h>

void ft_ft(int *nbr){
    
    *nbr=42;
}

int main(){
    int i=0;
    ft_ft(&i);
    
    write(1,&i,1);
}
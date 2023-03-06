#include <unistd.h>


void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;
}

int main(){
    int i=10;
    int *j=&i;
    int **k=&j;
    int ***l=&k;
    int ****m=&l;
    int *****n=&m;
    int ******o=&n;
    int *******p=&o;
    int ********q=&p;
    
    ft_ultimate_ft(&q);
    write(1,&i,1);

}
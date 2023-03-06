#include <unistd.h>
void ft_rev_int_tab(int *tab, int size){    
    char newline='\n';
    int i=0;
    int *tab_j= tab+size;
    while(i<=size/2){
        int j_copy=*tab_j;
        int i_copy=*tab;
        int i_s=i + '0';
        write(1,&i_s,1);
        write(1,&newline,1);
        if (size-i != i){
            *tab=j_copy;
            *tab_j=i_copy;
            write(1,&i_copy,1);
            write(1,&j_copy,1);
            write(1,&newline,1);
        }
        tab++;
        tab_j--;
        i++;
    }
}
int main(){
    int a[5]={66,90,42,122,98};
    int i =0;
    // ft_rev_int_tab(&a[0],4);
    while(i<5){
        write(1,&a[i],1);
        i++;
    }
    // write(1,&a,3);
}
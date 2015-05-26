#include <stdio.h>

int main(){
    int i=5;
    int *c;
    c=&i;
    printf("el valor del puntero es %d \n",*c);
    return 0;
}

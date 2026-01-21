#include <stdio.h>
#include <stdlib.h>


int main(){
    int total = 0, i;
    int vals[5] = {12, 15, 2, 5, 21};
    for (i = 0; i < 2; i++){
        total = total + vals[i];
    }
    printf("The total is: %i\n", total);
}
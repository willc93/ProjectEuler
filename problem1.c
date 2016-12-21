#include <stdio.h>

void main(){
    int i, total;
    for(i = 0; i < 1000; i++){
        if(i%3 == 0){
            total += i;
        }
        else if(i%5 == 0){
            total += i;
        }
    }
    printf("Total: %d", total);
}

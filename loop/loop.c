#include <stdio.h>

int loop(int n){
    int i = 0;
    while(i < n){
        printf("i = %d\n", i);
        i++;
    }
    return i;
}
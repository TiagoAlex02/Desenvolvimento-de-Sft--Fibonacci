#include <stdio.h>

int i;
int fib_recursiva(i){
    if(i==1){
        return 0;
    }
    if(i==2){
        return 1;
    }
    return fib_recursiva(n-2) + fib_recursiva(n-1);
}

int main(void){
    int i;
    scanf("%d",&i);
    printf("%d",fib_recursiva(i));
    return 0;
} 
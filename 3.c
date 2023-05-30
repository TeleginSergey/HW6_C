#include <stdio.h>

int main(){
    //num1 и num2 - первые числа Фиббоначи, к-рые изначально даны
    int n, fib, num1=0, num2=1;
    scanf("%d", &n);
    for (int i=1; i<n; i++){
        // fib - числа Фиббоначи
        fib = num1 + num2;
        num1 = num2;
        num2 = fib;
    }
    printf("%d\n", fib);
}
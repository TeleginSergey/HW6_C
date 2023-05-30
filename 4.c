#include <stdio.h>

int sumDigits(int *num){
    int sum=0;
    while (*num != 0){
        //добавляю последнюю цифру
        sum += *num % 10;
        //убираю последнюю цифру
        *num /= 10;
    }
    return sum;
}

int main(){
    int n=12345, *a = &n;
    printf("%d\n", sumDigits(a));
    return 0;
}
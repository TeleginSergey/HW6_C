#include <stdio.h>

int main(){
    int a, b, c, d, s;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    for (int i=a; i<=b; i++){
        s=0;
        //while используется максимум один раз
        while (i % d == c && s == 0){
            s+=1;
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
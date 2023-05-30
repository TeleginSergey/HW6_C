#include <stdio.h>

int ispolnitel(int num){
    int s=0, n=num, del = 1;
    if (num = 0){
        return;
    }
    //разрядность числа
    while (n != 0){
        n /= 10;
        s += 1;
    }
    for (int i=0; i < s-1; i++){
        del *= 10;
    }
    int proiz12=(num / del) * ( (num / (del / 10)) % 10); // произведение первой и второй цифры числа
    int proiz23=(num / (del / 10) % 10) * (num / (del / 100) % 10); //произведение второй и третьей цифры числа
    //выводим в порядке невозростания
    if (proiz12 >  proiz23){
        //если одну цифру умножить на другую, то полученное число или одноразрядное либо двухразрядное
        if (proiz23 >= 10){
            return proiz12*100+proiz23;
        }
        return proiz12*10+proiz23;
    } else {
        //если одну цифру умножить на другую, то полученное число или одноразрядное либо двухразрядное
        if (proiz12 >= 10){
            return proiz23*100+proiz12;
        }
        return proiz23*10+proiz12;
    }
}

int main(){
    int N=100;
    if (ispolnitel(N) !=0){
        printf("%d\n", ispolnitel(N));
    } else {
        //т.к. при сумме 0+0 =0, а в порядке невозрастания должно записаться 00
        printf("00\n");
    }
    return 0;
}
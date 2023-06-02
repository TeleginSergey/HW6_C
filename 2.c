#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *join(char *words[], int n){
    //я использовал динамичное выделение памяти, так как при использовании res  в функции printf компилятор выдавал ошибку, так как указатель создан внутри функции.
    size_t total_length = 0;
    // вычисляю общую длину всех строк
    for (size_t i = 0; i < n; i++){
        total_length += strlen(words[i]);
    }
    // выделяю достаточное кол-во места для объединенной строки и символа окончания строки
    char *res = malloc(total_length + n);
    if (!res) return NULL; //Проверяем удалось ли
    //добавляю все строки в переменную res
    for (size_t i=0; i<n; i++){
        strcat(res, words[i]);
        //В конце строки пробел не нужен
        if (i!=n-1){
            strcat(res, " ");
        }
    }
    return res;
}

int main(){
    char str1[] = "You are";
    char str2[] = "the best teacher";
    char str3[] = "in the world!";
    char str4[] = "Good luck to you!";
    char* arr[] = { str1, str2, str3, str4 };
    printf("%s\n", join(arr, 4));
    return 0;
}
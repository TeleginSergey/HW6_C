#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* join(char *words[], int n){
    char res[2048] = "";
    //добавляю пробелы к строкам, кроме последней
    for (int i=0; i<n-1; i++){
        strcat(words[i], " ");
    }
    //добавляю все строки в переменную res
    for (int i=0; i<n; i++){
        strcat(res, words[i]);
    }
    return res;
}

int main(){
    char str1[] = "Hello, world";
    char str2[] = "Goodbye, world";
    char str3[] = "C is the best";
    char str4[] = "Python is better";
    char* arr[] = { str1, str2, str3, str4 };
    printf("%s\n", join(arr, 4));
    return 0;
}
/*
Написать программу, осуществляющую вывод на стандартный поток stdout наибольшей цифры целого числа, которое задается на стандартном потоке ввода stdin.
В конце ответа не должно быть переноса на новую строку.
Проверить на валидность введенные данные.
В случае любой ошибки — выводить "n/a".
*/

#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("n/a");
        return 1;
    }
    int max_digit = 0;
    int n = num < 0 ? -num : num;
    do {
        int digit = n % 10;
        if (digit > max_digit) {
            max_digit = digit;
        }
        n /= 10;
    } while (n > 0);
    printf("%d", max_digit);
        
    return 0;
}


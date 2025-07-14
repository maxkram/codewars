/*

Написать программу, осуществляющую перестановку крайних цифр в целом трехзначном числе. Целое трехзначное число задается на стандартном потоке ввода stdin, результат перестановки выводится на стандартный поток вывода stdout.

Результат перестановки числа с учетом ведущих нулей на стандартный поток вывода stdout. В конце ответа должно быть переноса на новую строку.

Гарантируется, что на вход программе всегда подается целое трехзначное число.*/

#include <stdio.h>

int main() {
    int number;
    
    if (scanf("%d", &number) != 1 || (number < 100 && number > -100) || number > 999 || number < -999) {
        printf("n/a");
        return 1;
    }

    int abs_number = number < 0 ? -number : number;
    int last_digit = abs_number % 10;
    int first_digit = abs_number / 100;
    int middle_digit = (abs_number / 10) % 10;

    int result = last_digit * 100 + middle_digit * 10 + first_digit;
    if (number < 0)
        printf("-%03d\n", result);
    else
        printf("%03d\n", result);
    return 0;
}

/*
Вывести в стандартный поток вывода произведение всех нечётных цифр заданного целого числа.
Если нечётных цифр нет, результат должен быть 0.
Не должно быть переноса строки в конце.
В случае ошибки ввода — вывести "n/a".
*/

#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1) {
        printf("n/a");
        return 1;
    }

    int abs_num = num < 0 ? -num : num;
    int product = 1;
    int has_odd = 0;

    if (abs_num == 0) {
        printf("0");
        return 0;
    }

    while (abs_num > 0) {
        int digit = abs_num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd = 1;
        }
        abs_num /= 10;
    }

    printf("%d", has_odd ? product : 0);
    return 0;
}

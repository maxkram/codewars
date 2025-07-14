/*
Написать программу, осуществляющую вывод на стандартный поток stdout строки, состоящей из биномиальных коэффициентов C(n, k) для k = 0..n, разделённых пробелами.

Для вычисления коэффициента используется формула:

mathematica
Copy
Edit
C(n, k) = n! / (k! * (n - k)!)
Факториал числа n (n!) вычисляется как n! = 1 * 2 * 3 * ... * n.
Параметр n задаётся в виде неотрицательного целого числа через стандартный поток ввода stdin.

В конце ответа не должно быть переноса на новую строку.
*/

#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

unsigned long long binomial_coefficient(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n < 0) {
        printf("n/a");
        return 1;
    }

    for (int k = 0; k <= n; k++) {
        printf("%llu ", binomial_coefficient(n, k));
        if (k < n) {
            printf(" ");
        }
    }
    
    return 0;
}
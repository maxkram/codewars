/*
Написать программу, вычисляющую скалярное произведение двух векторов n-мерного пространства.

Формат ввода:

Через stdin поступает целое положительное число n (размерность).

Затем идут две строки по n целых чисел — координаты векторов A и B.

Все числа разделены пробелами.

Результат:

Вывести скалярное произведение A·B (то есть: A[0]*B[0] + A[1]*B[1] + ... + A[n-1]*B[n-1])

Без переноса строки

В случае ошибки — вывести n/a   
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("n/a");
        return 1;
    }

    int *A = (int *)malloc(n * sizeof(int));
    int *B = (int *)malloc(n * sizeof(int));
    if (A == NULL || B == NULL) {
        printf("n/a");
        free(A);
        free(B);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &A[i]) != 1) {
            printf("n/a");
            free(A);
            free(B);
            return 1;
        }
    }
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &B[i]) != 1) {
            printf("n/a");
            free(A);
            free(B);
            return 1;
        }
    }
    int scalar_product = 0;
    for (int i = 0; i < n; i++) {
        scalar_product += A[i] * B[i];
    }
    printf("%d", scalar_product);
    free(A);
    free(B);
    return 0;
}
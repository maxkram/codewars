/*
Three integers (A, B and C) arrive via the standard input stream—stdin, it is necessary to output one to the standard output stream—stdout if C is strictly between A and B, otherwise output zero.
There should be no newline break at the end of the response.
Check the validity of the entered data. In case of any error, output n/a.

Note: The conditional operator if can only be used for error handling.
*/

#include <stdio.h>

int main() {
    int A, B, C;

    if (scanf("%d %d %d", &A, &B, &C) != 3) {
        printf("n/a");
        return 1;
    }

    int result = ((C > A && C < B) || (C > B && C < A)) ? 1 : 0;
    printf("%d", result);

    return 0;
}

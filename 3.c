#include <stdio.h>

int main() {
    int x;

    printf("Введите количество уровней елочки (X): ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        for (int j = 0; j < x - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < x - 1; i++) {
        printf(" ");
    }
    printf("*\n");

    return 0;
}

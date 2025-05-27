#include <stdio.h>

int main() {
    float height;
    float tallest = 0, secondTallest = 0, thirdTallest = 0;

    printf("Введите рост учеников:\n");

    for (int i = 0; i < 3; i++) {
        scanf("%f", &height);
        if (height < 0) break;

        if (height > tallest) {
            thirdTallest = secondTallest;
            secondTallest = tallest;
            tallest = height;
        } else if (height > secondTallest) {
            thirdTallest = secondTallest;
            secondTallest = height;
        } else if (height > thirdTallest) {
            thirdTallest = height;
        }
    }

    printf("Рост в порядке убывания:\n");
    printf("%.2f\n", tallest);
    if (secondTallest > 0) {
        printf("%.2f\n", secondTallest);
    }
    if (thirdTallest > 0) {
        printf("%.2f\n", thirdTallest);
    }

    return 0;
}

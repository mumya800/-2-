#include <stdio.h>

int main() {
    int demandLevel;
    float distance, duration, totalCost;

    printf("Введите уровень спроса (1-100): ");
    scanf("%d", &demandLevel);
    printf("Введите длину маршрута (км): ");
    scanf("%f", &distance);
    printf("Введите длительность маршрута (мин): ");
    scanf("%f", &duration);

    if (demandLevel < 1 || demandLevel > 100 || distance < 0 || duration < 0) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    float baseFare = 50.0; // Базовая стоимость
    float distanceFare = 10.0 * distance; // Стоимость за км
    float durationFare = 2.0 * duration; // Стоимость за мин
    float serviceFee = 29 + (demandLevel - 1) * (40.0 / 99.0); // Комиссия в зависимости от спроса

    totalCost = baseFare + distanceFare + durationFare + serviceFee;
    printf("Стоимость поездки: %.2f рублей\n", totalCost);

    return 0;
}

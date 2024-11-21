#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Nhap nhiet do (do Celsius): ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("nhiet do %.2f do Celsius tuong duong voi %.2f do Fahrenheit\n", celsius, fahrenheit);
    return 0;
}

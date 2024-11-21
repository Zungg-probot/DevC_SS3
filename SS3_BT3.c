#include <stdio.h>

int main() {
	float bankinh;
	float PI = 3.14;
	printf("Nhap vao ban kinh hin tron: ");
	scanf("%f", &bankinh);
    float chuvi = 2 * PI * bankinh;
    float dientich = PI * bankinh * bankinh;

    printf("\nChu vi hinh tron la: %.2f", chuvi);
    printf("\nDien tich hinh tron la: %.2f", dientich);

    return 0;
}

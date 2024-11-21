#include <stdio.h>

int main() {
    float toan, van, anh, tongdiem, dtb;
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem van: ");
    scanf("%f", &van);
    printf("Nhap diem anh: ");
    scanf("%f", &anh);
    tongdiem = toan + van + anh;
    dtb = tongdiem / 3;
    printf("Tong diem: %f\n", tongdiem);
    printf("Diem trung binh: %.2f\n", dtb);

    return 0;
}

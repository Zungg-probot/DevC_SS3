#include <stdio.h>

int main() {
    float canhday, chieucao, dientich;
    printf("nhap chieu dai canh day: ");
    scanf("%f", &canhday);
    printf("nhap chieu cao tam giac: ");
    scanf("%f", &chieucao);
    dientich = (canhday * chieucao) / 2;
    printf("Dien tich tam giac la: %.2f\n", dientich);
    return 0;
}

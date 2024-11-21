#include <stdio.h>

int main(){
	int number, nghin, tram, chuc, dvi, tong;
	printf("Nhap so co 4 chu so: ");
	scanf("%d", &number);
	nghin = number / 1000;
	tram = number % 1000 / 100;
	chuc = number % 100 / 10;
	dvi = number % 10;
	tong = nghin + tram + chuc + dvi;
	printf("tong 4 chu so la: %d", tong);
	return 0;
}

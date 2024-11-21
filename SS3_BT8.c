#include <stdio.h>

int main(){
	int number, nghin, tram, chuc, dvi;
	printf("Nhap so co 4 chu so: ");
	scanf("%d", &number);
	nghin = number / 1000;
	tram = number % 1000 / 100;
	chuc = number % 100 / 10;
	dvi = number % 10;
	printf("so nghich dao la: %d%d%d%d", dvi, chuc, tram, nghin);
	return 0;
}

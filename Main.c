#include <stdio.h>

void main() {
	int a = 0;
	int b = 0;
	printf("nhap so a:");   scanf_s("%d", &a);
	printf("nhap so b:");   scanf_s("%d", &b);
	printf("tong: %d \n", a + b);
	printf("hieu: %d \n", a - b);
	printf("tich: %d \n", a * b);
	printf("thuong: %.2f \n", (float) a / b);

}
	//char ky_tu = 0;
	//printf("nhap vao 1 ky tu bat ky: ");
	//scanf_s("%c", &ky_tu);
	//printf("ky tu he 10: %d, ky tu hẹ 16: %x\n", ky_tu, ky_tu);
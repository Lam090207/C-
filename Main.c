#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int delta = 0;
	printf("nhap so a:"); scanf("%d", &a);
	printf("nhap so b:"); scanf("%d", &b);
	printf("nhap so c:"); scanf("%d", &c);
	delta = b * b - 4 * a * c;
	if (delta > 0)
	{
		printf("Phuong trinh co 2 nghiem: x1 = %.2f,x2 = %.2f \n", (-b - sqrt(delta)) / 2.0 * a, (-b + sqrt(delta)) / 2.0 * a);
	}
	else if (delta == 0)
	{
		printf("Phuong trinh co 1 nghiem: x = %.2f \n", -b / (2.0) * a);
	}
	else
	{
		printf("Phuong trinh vo nghiem");
	}

}


	//int diem = 7.5;

	//if (diem > 8)
	//{
	//	printf("loai gioi \n");
	//}
	//else if (diem >= 6.5 && diem < 8);
	//{

	//}
	//int a = 10;
	//int b = 3;
	//printf("%d \n", a > b);
	//printf("%d \n", a < b);
	//printf("%d \n", a > b && 7>3);
	//printf("%d \n", a > b);
//	int a = 0;
//	int b = 0;
//	printf("nhap so a:");   scanf_s("%d", &a);
//	printf("nhap so b:");   scanf_s("%d", &b);
//	printf("tong: %d \n", a + b);
//	printf("hieu: %d \n", a - b);
//	printf("tich: %d \n", a * b);
//	printf("thuong: %.2f \n", (float) a / b);
//
//}
//	//char ky_tu = 0;
//	//printf("nhap vao 1 ky tu bat ky: ");
//	//scanf_s("%c", &ky_tu);
//	//printf("ky tu he 10: %d, ky tu hẹ 16: %x\n", ky_tu, ky_tu);
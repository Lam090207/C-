#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	printf("bai 1. \n");
	int x = 0;
	printf("nhap vao so nguyen x:"); scanf_s("%d", &x);
	if (x > 0){
		printf("day la so duong \n");
	}
	else if (x < 0){
		printf("day la so am ");
	}
	else {
		printf("day la so 0");
	}

	printf("\n");
	printf("bai 2. \n");
	int y = 0;
	printf("nhap vao so nguyen y:"); scanf("%d", &y);
	if (x % 2 == 0) {
		printf("day la so chan");
	}
	else if (x % 2 == 1) {
		printf("day la so le");
	}
	printf("\n");
	printf("bai 3. \n");
	int a = 0;
	int b = 0;
	printf("nhap vao 2 so nguyen a va b:"); scanf("%d, %d", &a, &b);
	if (a - b > 0) {
		printf("a lon hon b \n");
	}
	else if(b-a >0){
		printf("b lon hon a \n");
	}
	else {
		printf(" a bang b");
	}

	printf("\n");
	printf("bai 4. \n");
	int c = 0;
	printf("nhap vao 3 so nguyen a,b va c:"); scanf("%d, %d, %d", &a, &b, &c);

	int max_value= a;
	if (b > max_value) {
		max_value = b;
	}
	if (c > max_value) {
		max_value = c;
	}
	printf("so lon nhat la: %d", max_value);
	printf("\n");

	printf("bai 5. \n");
	int so_dien = 0;
	int sum = 0;
	printf("nhap vao chi so dien tieu thi trong thang:"); 
	scanf(" %d", &so_dien);
	if (0 <= so_dien && so_dien <= 50) {
		sum = so_dien * 1800;
	}
	else if (51 <= so_dien && so_dien <= 100) {
		sum = 50 * 1800 + (so_dien -50) * 2000;
	}
	else if (101 <= so_dien && so_dien <= 200) {
		sum = 50 * 1800 + 50 * 2000 + (so_dien - 100)  * 2500;
	}
	else if (so_dien > 200) {
		sum = 50 * 1800 + 50 * 2000 + 100 * 2500 + (so_dien - 200) * 3000;
	}
	printf("so dien trong thang la: %d", sum);

	printf("\n");
	printf("bai 6. \n");
	printf("nhap vap 2 so nguyen a,b:"); 
	scanf("%d,%d", &a, &b);
	printf("=====MENU====\n");
	printf("A. Cong     B. Tru \nC. Nhan     D. Chia\n");
	char ky_tu;
	printf("Nhap o mong muon:");
	scanf(" %c", &ky_tu);
	switch (ky_tu) {
		case 'A':
		case 'a':
			printf("ket qua cua a + b : %d \n", a + b);
			break;
		case 'B':
		case 'b':
			printf("Ket qua cua a - b: %d \n", a - b);
			break;
		case 'C':
		case 'c':
			printf("Ket qua cua a * b: %d \n", a * b);
			break;
		case 'D':
		case 'd':
			printf("Ket qua cua a / b: %d \n", a / b);
			break;
		default:
			printf("Lua chon khong hop le!!!!");
			break;
	}

	printf("\n");
	printf("bai 7. \n");
	int n = 0;
	printf("Nhap vao 1 so nguyen n: "); scanf(" %d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("bai 8. \n");
	int tong = 0;
	printf("Nhap vao 1 so nguyen n: "); scanf(" %d", &n);
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	printf("Tong: %d", tong);

}

//Buoi4
	//int n = 0;
	//printf("nhap nguyen n:"); scanf("%d", &n);
	//int sum = 1;
	//for (int i = 1; i<=n; i++) {
	//	
	//	sum *= i;
	//	
	//}
	//	printf("%d!= %d \n", n , sum);
	
	//for (int i = 1; i <= 9; i++)
	//{
	//	printf("Bang cuu chuong %d \n",i);
	//	for (int a = 1; a <= 10; a++)
	//	{
	//		printf("%d x %d = %d \n",i, a, i * a);
	//	}
	//		printf("\n");
	//}
	//for (int i = 0; i <= 10; i++)
	//{
	//	printf("hello \n");
	//}
//Buoi 3
	//int a = 0;
	//int b = 0;
	//int c = 0;
	//int delta = 0;
	//printf("nhap so a:"); scanf("%d", &a);
	//printf("nhap so b:"); scanf("%d", &b);
	//printf("nhap so c:"); scanf("%d", &c);
	//delta = b * b - 4 * a * c;
	//if (delta > 0)
	//{
	//	printf("Phuong trinh co 2 nghiem: x1 = %.2f,x2 = %.2f \n", (-b - sqrt(delta)) / 2.0 * a, (-b + sqrt(delta)) / 2.0 * a);
	//}
	//else if (delta == 0)
	//{
	//	printf("Phuong trinh co 1 nghiem: x = %.2f \n", -b / (2.0) * a);
	//}
	//else
	//{
	//	printf("Phuong trinh vo nghiem");
	//}


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
//Buoi 2	
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
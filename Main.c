#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
//#include <time.h>
void main() {
	int du = 0;
	int a = 0;
	int b = 0;
	printf("Bai 6:\n");
	printf("Nhap vao 2 so nguyen a va b: "); scanf("%d %d", &a, &b);
	while (1) {
		du = a % b;
		if (du != 0) {
			a = b;
			b = du;
		}
		else {
			printf(" %d la UCLN cua a va b", b);
		break;
		}
	}
	printf("\n");
	printf("Bai 7: \n");
	printf("Cho phuong trinh f(x) = x ^ 2\n");
	printf("Nhap vao 2 so nguyen a va b: "); scanf("%d %d", &a, &b);
	float c = 0;
	float d = 0;
	int n = 1000;
	float h = 0;
	float tong = 0;
	h =(float) (b - a) / n;
	for (int i = 1; i <= n - 1; i++) {
		tong += (a + i * h) * (a + i * h);
	}
	printf("Ket qua tich phan tu a den b cua f(x) la: %f", (h / 2.0) * (a * a + 2.0 * tong + b * b));
	
	printf("\n");
	printf("Bai 8:\n");
	printf("Nhap vao 2 so nguyen a va b:"); scanf("%d %d", &a, &b);
	int gtri_a = a;
	int gtri_b = b;
	while (1) {
		du = a % b;
		if (du != 0) {
			a = b;
			b = du;
		}
		else {
			printf("BCNN la : %d", abs((gtri_a * gtri_b) / (b)));
			break;
		}
	}
	printf("Bai 9:\n");
	printf("========ATM========");
	int so_tien_nhap_vao = 0;
	int k = 0;
	printf("Nhap vap so tien muon rut: "); scanf("%d", &so_tien_nhap_vao);
	if (so_tien_nhap_vao % 50000 != 0 || so_tien_nhap_vao <= 0){
		printf("So tien nhap vao khong hop le, Vui long nhap la so tien la boi so cua 50000!");
	}
	int t50 = 0;
	int t100 = 0;
	int t200 = 0;
	int t500 = 0;
	int con_lai = so_tien_nhap_vao;
	if (con_lai >= 850000) {
		t500 = 1;
		t200 = 1;
		t100 = 1;
		t50 = 1;
		con_lai -= 850000;
	}
	t500 += con_lai / 500000;
	con_lai %= 500000;
	t200 += con_lai / 200000;
	con_lai %= 200000;
	t100 += con_lai / 100000;
	con_lai %= 100000;
	t50 += con_lai / 50000;
	con_lai %= 50000;

	printf("So tien rut duoc la: \n");
	if (t50 > 0)  printf("%d x 50000\n", t50);
	if (t100 > 0) printf("%d x 100000\n", t100);
	if (t200 > 0) printf("%d x 200000\n", t200);
	if (t500 > 0) printf("%d x 500000\n", t500);
	

}
	//int n = 0;
	//printf("Nhap vao n: "); scanf("%d", &n);
	//for (int i = 2; i <= n; i++) {
	//	int kiem_tra_so_nguyen_to = 1;
	//	for (int z = 2; z <= i / 2; z++) {
	//		if (i % z == 0) {
	//			kiem_tra_so_nguyen_to = 0;
	//			break;
	//		}
	//	}
	//	//printf("cac so nguyen to la: %d\n", i);
	//	if (kiem_tra_so_nguyen_to) {
	//		printf("day la so nguyen to: %d\n", i);
	//	}
	//	//else {
	//	//	printf("day khong phai la so nguyen to");
	//	//}
	//}
	//printf("\n");
	
	//int n = 0;
	//int kiem_tra_so_nguyen_to = 1;
	//printf("nhap vao so n:"); scanf("%d", &n);
	//if (n < 0) {
	//	printf("Nhap so lon hon 0!\n");
	//}
	//else if (n < 2) {
	//	printf("%d khong phai la so nguyen to");
	//}
	//else {
	//	for (int i = 1; i <= n/2; i++) { 

	//		if (n % i == 0) {
	//			kiem_tra_so_nguyen_to = 0;
	//			break;
	//		}
	//	}
	//	if (kiem_tra_so_nguyen_to) {
	//			printf("%d day la so nguyen to \n", n);
	//	}
	//	else {
	//			printf("%d day khong la so nguyen to \n", n);

	//	}
	//}
	
	//float so_tien_ban_dau = 0;
	//float lai_suat = 0;
	//int so_nam_gui_tien = 0;
	//float tong = 0;
	//printf("Nhap vao so tien gui ban dau: "); scanf("%f", &so_tien_ban_dau);
	//printf("Nhap vao so nam muon gui: "); scanf("%d", &so_nam_gui_tien);
	//printf("Nhap vao lai suat: "); scanf("%f", &lai_suat);
	//tong = so_tien_ban_dau;
	//for (int i = 1; i <= so_nam_gui_tien; i++) {
	//	tong = tong + (tong * lai_suat / 100);
	//	printf("so tien nhan dc sau nam thu %d la: %.1f\n", i, tong);
	//}
	
	//int mat_khau = 12345678;
	//int so_du = 200000;
	//int mat_khau_user = 0;
	//int step = 1;
	//int so_tien_rut = 0;
	//char ky_tu = 0;
	//int count = 0;
	//while (step != 0) {
	//	switch (step) {
	//	case 1:
	//		printf("Quy khach vui long nhap mat khau: "); scanf("%d", &mat_khau_user);
	//		if (mat_khau_user == mat_khau) {
	//			step = 2;
	//		}
	//		else if (mat_khau_user != mat_khau) {
	//			count += 1;
	//			if (count == 4) {
	//				step = 5;
	//			}
	//		}
	//		else {
	//			step = 6;
	//		}
	//		break;
	//	case 2:
	//		printf("Nhap so tien muon rut: "); scanf("%d", &so_tien_rut);
	//		step = 3;
	//		break;
	//	case 3:
	//		if (so_tien_rut > so_du) {
	//			step = 2;
	//			printf("SO DU CUA QUY KHACH KHONG DU, VUI LONG NHAP LAI!\n");
	//		}
	//		else
	//		{
	//			step = 4;
	//		}
	//		break;
	//	case 4:
	//		printf("So tien quy khach da rut la: %d \n", so_tien_rut);
	//		so_du = so_du - so_tien_rut;
	//		printf("So tien con lai la:%d \n", so_du);
	//		step = 6;

	//		break;
	//	case 5:
	//		printf("ket thuc!");
	//		step = 0;
	//		break;
	//	case 6:
	//		printf("Quy khach co muon tiep tuc khong? ");
	//		scanf(" %c", &ky_tu);
	//		if (ky_tu == 'y' || ky_tu == 'Y') {
	//			step = 1;
	//		}
	//		else {
	//			step = 5;
	//		
	//		}
	//		break;
	//	}
	//}
	
	//srand(time(NULL));
	//int x = rand() %100;
	//int n = 0;
	//int count = 0;
	//do {
	//	printf("nhap so ban doan:");
	//	scanf("%d", &n);
	//	count++;
	//	if (n > x) printf("nho hon \n");
	//	if (x > n) printf("lon hon \n");
	//	
	//} while (n != x);
	//printf("chuc mung ban da doan dung sau %d lan \n", count);
	//srand(time(NULL));
	//int x = rand();
	//printf("%d \n", x);
	
	//printf("bai 1. \n");
	//int x = 0;
	//printf("nhap vao so nguyen x:"); scanf_s("%d", &x);
	//if (x > 0){
	//	printf("day la so duong \n");
	//}
	//else if (x < 0){
	//	printf("day la so am ");
	//}
	//else {
	//	printf("day la so 0");
	//}

	//printf("\n");
	//printf("bai 2. \n");
	//int y = 0;
	//printf("nhap vao so nguyen y:"); scanf("%d", &y);
	//if (x % 2 == 0) {
	//	printf("day la so chan");
	//}
	//else if (x % 2 == 1) {
	//	printf("day la so le");
	//}
	//printf("\n");
	//printf("bai 3. \n");
	//int a = 0;
	//int b = 0;
	//printf("nhap vao 2 so nguyen a va b:"); scanf("%d, %d", &a, &b);
	//if (a - b > 0) {
	//	printf("a lon hon b \n");
	//}
	//else if(b-a >0){
	//	printf("b lon hon a \n");
	//}
	//else {
	//	printf(" a bang b");
	//}

	//printf("\n");
	//printf("bai 4. \n");
	//int c = 0;
	//printf("nhap vao 3 so nguyen a,b va c:"); scanf("%d, %d, %d", &a, &b, &c);

	//int max_value= a;
	//if (b > max_value) {
	//	max_value = b;
	//}
	//if (c > max_value) {
	//	max_value = c;
	//}
	//printf("so lon nhat la: %d", max_value);
	//printf("\n");

	//printf("bai 5. \n");
	//int so_dien = 0;
	//int sum = 0;
	//printf("nhap vao chi so dien tieu thi trong thang:"); 
	//scanf(" %d", &so_dien);
	//if (0 <= so_dien && so_dien <= 50) {
	//	sum = so_dien * 1800;
	//}
	//else if (51 <= so_dien && so_dien <= 100) {
	//	sum = 50 * 1800 + (so_dien -50) * 2000;
	//}
	//else if (101 <= so_dien && so_dien <= 200) {
	//	sum = 50 * 1800 + 50 * 2000 + (so_dien - 100)  * 2500;
	//}
	//else if (so_dien > 200) {
	//	sum = 50 * 1800 + 50 * 2000 + 100 * 2500 + (so_dien - 200) * 3000;
	//}
	//printf("so dien trong thang la: %d", sum);

	//printf("\n");
	//printf("bai 6. \n");
	//printf("nhap vap 2 so nguyen a,b:"); 
	//scanf("%d,%d", &a, &b);
	//printf("=====MENU====\n");
	//printf("A. Cong     B. Tru \nC. Nhan     D. Chia\n");
	//char ky_tu;
	//printf("Nhap o mong muon:");
	//scanf(" %c", &ky_tu);
	//switch (ky_tu) {
	//	case 'A':
	//	case 'a':
	//		printf("ket qua cua a + b : %d \n", a + b);
	//		break;
	//	case 'B':
	//	case 'b':
	//		printf("Ket qua cua a - b: %d \n", a - b);
	//		break;
	//	case 'C':
	//	case 'c':
	//		printf("Ket qua cua a * b: %d \n", a * b);
	//		break;
	//	case 'D':
	//	case 'd':
	//		printf("Ket qua cua a / b: %d \n", a / b);
	//		break;
	//	default:
	//		printf("Lua chon khong hop le!!!!");
	//		break;
	//}

	//printf("\n");
	//printf("bai 7. \n");
	//int n = 0;
	//printf("Nhap vao 1 so nguyen n: "); scanf(" %d", &n);
	//for (int i = 1; i <= n; i++) {
	//	if (i % 2 == 0) {
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");
	//printf("bai 8. \n");
	//int tong = 0;
	//printf("Nhap vao 1 so nguyen n: "); scanf(" %d", &n);
	//for (int i = 1; i <= n; i++) {
	//	tong += i;
	//}
	//printf("Tong: %d", tong);

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
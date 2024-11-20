#include<stdio.h>

int main() {
	//float thi co dinh dang %f
	float pi = 3.14, r, chu_vi, dien_tich;
	//yeu cau nguoi dung nhap
	printf("Moi ban nhap ban kinh cua duong tron r là: ");
	scanf("%f", &r);
	//tien hanh tinh chu vi dien tich 
	chu_vi = 2 * pi * r;
	dien_tich = pi * r * r;
	//in ket qua ra man hinh 
	printf("chu vi cua hinh tron la %2.f\n", chu_vi);
	printf("dien tich cua hinh tron la %2.f", dien_tich);
	return 0;
}

#include<stdio.h>

int main() {
	float canh, chieu_cao, dien_tich;
	// tien hanh cho nguoi dung nhap tu ban phim 
	printf("Moi ban nhap canh cua tam giac là: ");
	scanf("%f", &canh);
	printf("Moi ban nhap chieu cao cua tam giac la: ");
	scanf("%f", &chieu_cao);
	//tien hanh tinh dien tich tam giac 
	dien_tich = 0.5 * canh * chieu_cao;
	// sau do in ra man hinh 
	printf("dien tich tam giac la %.2f", dien_tich);
	return 0;
}

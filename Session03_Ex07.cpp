#include<stdio.h>

int main() {
	// la so nguyen len ta co the dung int 
	int abcd, hang_nghin, hang_tram, hang_chuc, hang_don_vi, tong;
	// cho nguoi dung nhap tu ban phim 
	printf("Moi ban nhap so nguyen co 4 chu so la: ");
	scanf("%d", &abcd);
	// tach so da nhap thanh a b c d 
	hang_nghin = (abcd / 1000) % 100;
	hang_tram = (abcd / 100) % 10;
	hang_chuc = (abcd / 10) % 10;
	hang_don_vi = abcd % 10;
	//tinh tong cac so 
	tong = hang_nghin + hang_tram + hang_chuc + hang_don_vi;
	// in ket qua ra man hinh 
	printf("tong cua 4 chu so la: %d", tong);
	return 0;
}

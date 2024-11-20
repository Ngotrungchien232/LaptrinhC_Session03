#include<stdio.h>
//khai bao thu vien chuan cua c 

int main() {
	//khai bao cac bien co trong bai 
	float diem_toan, diem_van, diem_anh, tong_diem, trung_binh;
	//yeu cau ng dung nhap tu ban phim 
	printf("Moi ban nhap vao diem toan la: ");
	scanf("%f", &diem_toan);
	printf("Moi ban nhap vao diem van la: ");
	scanf("%f", &diem_van);
	printf("Moi ban nhap vao diem anh la: ");
	scanf("%f", &diem_anh);
	// tien hanh tinh tong va diem trung binh
	tong_diem = diem_toan + diem_van + diem_anh;
	trung_binh = tong_diem / 3;
	// in ra man hinh ket qua 
	printf("Tong diem cua ban la %.2f\n", tong_diem);
	printf("Diem trung binh cua ban la %.2f", trung_binh);
	return 0;
}

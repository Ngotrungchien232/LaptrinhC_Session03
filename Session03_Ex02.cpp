#include<stdio.h>

int main() {
	float Celsius, Fahrenhei;
	//yeu cau nhap cho Celsius
	printf("Moi ban nhap Celsius là: ");
	scanf("%f", &Celsius);
	//doi tu Celsius sang Fahrenhei
	Fahrenhei = 1.8 * Celsius + 32;
	printf("Fahrenhei la %f", Fahrenhei);
	return 0;
}

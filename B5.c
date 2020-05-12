#include <stdio.h>

int main()
{
	double S, top, bottom, height;
//////////////////////////////////////////// 
	printf("Nhap do dai day nho cua hinh thang: ");
	scanf("%lf", &top);
	printf("Nhap do dai day lon cua hinh thang: ");
	scanf("%lf", &bottom); 
	printf("Nhap do dai chieu cao cua hinh thang: ");
	scanf("%lf", &height);
	S = (top+bottom)*height/2;	
//////////////////////////////////////////// 
	printf("Dien tich cua hinh thang voi cac do dai nhu tren la: %.2lf", S);
//////////////////////////////////////////// 
	return 0;	
}

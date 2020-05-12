#include <stdio.h>

int main()
{
	int toan, ly, hoa, tong;
	double TB;	
//////////////////////////////////////////// 
	printf("Nhap diem toan: ");
	scanf("%d", &toan);
	printf("Nhap diem ly: ");
	scanf("%d", &ly);
	printf("Nhap diem hoa: ");
	scanf("%d", &hoa);
	tong = toan + ly + hoa;
	TB = (double) (toan + ly + hoa) / 3;
//////////////////////////////////////////// 
	printf("Tong diem cua ca 3 mon la: %d", tong);
	printf("\nDiem trung binh cua ca 3 mon la: %.2lf", TB);
////////////////////////////////////////////
	return 0;		
}

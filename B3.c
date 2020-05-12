#include <stdio.h>

int main()
{
	int num1, num2;
	double thuong;
///////////////////////////////	
	printf("Nhap so num1: ");
	scanf("%d", &num1);
	printf("Nhap so num2: ");
	scanf("%d", &num2);	
//////////////////////////////
	printf("\nTong = %d", num1 + num2);
	printf("\nHieu = %d", num1 - num2);
	printf("\nTich = %d", num1 * num2);		
	printf("\nThuong = %lf", (double)num1 / (double)num2);	
//////////////////////////////	
	return 0;
}

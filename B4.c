#include <stdio.h>

int main()
{
	double doC,doF;
////////////////////////////////////////////	
	printf("Moi ban nhap nhiet do can chuyen doi (do C): ");
	scanf("%lf", &doC);
	doF = doC*9/5 + 32;
	printf("Do F tuong ung la: %.2lf", doF);
////////////////////////////////////////////	
	return 0;
}

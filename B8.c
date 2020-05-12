#include <stdio.h>;

int main()
{
	printf("/*=====================Kich thuoc cua cac kieu du lieu =====================*/");
	printf("\n\n\tKieu int: %d Bytes", sizeof(int));
	printf("\n\tSo nguyen: 3");
	printf("\n\n\tKieu float: %d Bytes", sizeof(float));
	printf("\n\tSo thuc kieu float: 3.423563");
	printf("\n\n\tKieu double: %d Bytes", sizeof(double));
	printf("\n\tSo thuc kieu double: 3.545454545454");
	printf("\n\n\tKieu char: %d Bytes", sizeof(char));
	printf("\n\tDu lieu kieu char: 'A'");
	printf("\n\n\tKieu long int: %d Bytes", sizeof(long int));
	printf("\n\n\tKieu long double: %d Bytes", sizeof(long double));
	printf("\n\n/*============================================================================*/");
	return 0;	
}

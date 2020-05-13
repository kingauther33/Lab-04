/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int sum;
    char let[80];
    float discount, dump, discount_rate;
///////////////////////////////////////// 
    printf("Nhap sum: ");
    scanf("%d", &sum);
    printf("Gia tri cua sum la: %d", sum);
    printf("%s", "\nWelcome");
    fflush(stdin);
    printf("\nNhap ki tu cho 'letter': ");
    scanf("%s", let);
    printf("'Letter' la: %s", let);
    printf("\nNhap float discount: ");
    scanf("%f", &discount);
    printf("Discount la: %f", discount);
    printf("\nNhap float dump: ");
    scanf("%f", &dump);
    printf("Dump la: %f", dump);
    printf("\nNhap float discount_rate: ");
    scanf("%f", &discount_rate);
    printf("Discount rate la: [%-.2f]", discount_rate);
}
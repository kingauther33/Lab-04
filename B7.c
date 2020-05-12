/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    float s1, s2, s3, r, a, cd, cr;
    float p1, p2, p3;
///////////////////////////////////////// 
    printf("-------------------------------");
    printf("\nMoi ban nhap chieu rong hinh chu nhat: ");
    scanf("%f", &cr);
    printf("Moi ban nhap chieu dai hinh chu nhat: ");
    scanf("%f", &cd);
    printf("Moi ban nhap gia tri mot canh hinh vuong: ");
    scanf("%f", &a);    
    printf("Moi ban nhap ban kinh cua duong tron: ");
    scanf("%f", &r);
///////////////////////////////////////// 
    s1 = cd * cr;
    p1 = (cd+cr)*2;
    s2 = pow(a,2);
    p2 = a*4;
    s3 = r*r*3.14;
    p3 = 2*r*3.14;
///////////////////////////////////////// 
    printf("-------------------------------");
    printf("\nDien tich hinh chu nhat la: %.2f", s1);
    printf("\nChu vi hinh chu nhat la: %.2f", p1);
    printf("\nDien tich hinh vuong la: %.2f", s2);
    printf("\nChu vi hinh chu nhat la: %.2f", p2);
    printf("\nDien tich hinh tron la: %.2f", s3);
    printf("\nChu vi hinh tron la: %.2f", p3);
    printf("\n-------------------------------");
///////////////////////////////////////// 
    return 0;
}


/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    char name[80];
    int basic, daper;
    double bonper, loadet, salary;
//////////////////////////////////////////////////////////////////////////////////
    printf("Nhap ten: ");
    scanf("%[^\n]", name);
    fflush(stdin);
    printf("Nhap so luong co ban: ");
    scanf("%d", &basic);
    printf("Nhap daper: ");
    scanf("%d", &daper);
    printf("Nhap bonper: ");
    scanf("%lf", &bonper);
    printf("Nhap loadet: ");
    scanf("%lf", &loadet);
    salary = basic + (double)basic *(double)daper / 100 + bonper *(double)basic / 100 - loadet;
////////////////////////////////////////////////////////////////////////////////// 
    printf("------------------------------------- ");
    printf("\n\tName\tBasic\tSalary");
    printf("\n\t%s\t%d\t%.2lf", name, basic, salary);
    
}
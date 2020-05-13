/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    char item[20];
    int partno;
    float cost;
    printf("Nhap du lieu cho item, partno va cost: ");
    scanf("%s %*d %f",item, &partno, &cost);  // sao no bi loi vay co @@
    printf("Item, partno va cost lan luot la: %s, %d, %f",item, partno, cost);
}
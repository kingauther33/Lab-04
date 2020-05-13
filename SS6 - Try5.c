/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    char first[80];
    char last[80];
///////////////////////////////////////// 
    printf("Ho cua ban la: ");
    scanf("%[^\n]", first);
    printf("Ten cua ban la: ");
    fflush(stdin);
    scanf("%[^\n]", last);
///////////////////////////////////////// 
    printf("Ho ten cua ban la: %s %s", last, first);
}
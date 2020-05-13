/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    char line[80]; /* line[80] is an array which stores 80 characters */
    scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ]",line);
    printf("In ra day vua nhap: %s", line);
}
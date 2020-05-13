/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int breadth;
    float length, height;
    scanf("%d %f %f",&breadth, &length, &height);
    printf("%d %f %6.2e",breadth, length, height);
}
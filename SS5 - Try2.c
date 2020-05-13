#include <stdio.h>

int main()
{
    float cm, foot, inch;
    printf("Moi ban nhap cm can doi: ");
    scanf("%f", &cm);
    inch = cm / 2.54;
    foot = inch / 12;
    printf("\n%.1f centimeters is %.1f foot", cm, foot);
    printf("\n%.1f centimeters is %.1f inches", cm, inch);
    return 0;
}
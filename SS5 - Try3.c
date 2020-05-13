#include <stdio.h>

int main()
{
    int iResult, a = 10, b = 8, c = 6, d = 5, e =2;
    iResult = a - b - c - d;        // i1 = -9
    printf("\ni1 = %d", iResult);
    iResult = a - b + c - d;        // i2 = 3
    printf("\ni2 = %d", iResult);
    iResult = a + b / c / d;        // i3 = 10
    printf("\ni3 = %d", iResult);
    iResult = a + b / c * d;        // i4 = 15
    printf("\ni4 = %d", iResult);
    iResult = a / b * c * d;        // i5 = 30
    printf("\ni5 = %d", iResult);
    iResult = a % b / c * d;        // i6 = 0
    printf("\ni6 = %d", iResult);
    iResult = a % b % c % d;        // i7 = 2
    printf("\ni7 = %d", iResult);
    iResult = a - (b - c) - d;      // i8 = 3
    printf("\ni8 = %d", iResult);
    iResult = (a - (b - c)) - d;    // i9 = 3
    printf("\ni9 = %d", iResult);
    iResult = a - ((b - c) - d);    // i10 = 13
    printf("\ni10 = %d", iResult);
    iResult = a % (b % c) * d * e;  // i11 = 0
    printf("\ni11 = %d", iResult);
    iResult = a + (b - c) * d - e;  // i12 = 18
    printf("\ni12 = %d", iResult);
    iResult = (a + b) * c + d * e;  // i13 = 118
    printf("\ni13 = %d", iResult);
    iResult = (a + b) * (c / d) % e; // i14 = 0
    printf("\ni14 = %d", iResult);
    return 0;
}
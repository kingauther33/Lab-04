#include <stdio.h>

int main()
{
    int s, m = 3, n = 5, r, t;
    float x = 3.0, y;
    t = n/m;                // t = 1 (kieu int)
    printf("t = %d", t); 
    r = n%m;                // r = 2 
    printf("\nr = %d", r);
    y = n/m;                // y = 1.000000 (mac du la kieu so thuc float nhung n, m la 2 kieu int chia cho nhau truoc = 1)
    printf("\ny = %f", y);
    t = x*y-m/2;            // t = 3.0 * 1 - 3/2 = 3 - 1 = 2 (do la kieu int nen 3/2 = 1)
    printf("\nt = %d", t);
    x = x*2.0;              // x = 6.000000;
    printf("\nx = %f", x);
    s = (m+n)/r;            // s = 4
    printf("\ns = %d", s);
    y = --n;                // y = 4, n = 4
    printf("\ny = %f", y);
    printf("\nn = %d", n);
    
    return 0;
}
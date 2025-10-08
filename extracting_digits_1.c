#include <stdio.h>

int main()
{
    int n; /// four digit number
    scanf("%d", &n);
    int a, b, c, d;
    d = n % 10;
    n /= 10;
    c = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    a = n % 10;
    int rev = d * 1000 + c * 100 + b * 10 + a;
    printf("Reverse :%d", rev);
    return 0;
}
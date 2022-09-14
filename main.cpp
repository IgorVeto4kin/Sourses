#include <stdio.h>
int main()
{
    long long a = 1;
    int f = 0;
    scanf("%lld", &a);
    while (a) {
        int t = a%10;
        if (t==0 && f) {
            printf("%d", t);
        }
        if ( t != 0 ) {
            f = 1;
            printf("%d", t);
        }
        a /= 10;
    }
}


#include <stdio.h>
int fib(int q);
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", fib(a));
    return 0;
}

int fib( int q) {
    int l1 = 1, l2 = 1, l3 = 1, l4 = 0;
    if ( q == 1 || q == 2 || q == 0 ) {
        return 1;
    }
    else {
        for ( int i = 2 ; i < q ; i++ ) {
            l4 = l1 + l2 + l3;
            l1 = l2;
            l2 = l3;
            l3 = l4;

        }

        return l4;
    }
}


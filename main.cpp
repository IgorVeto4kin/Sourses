#include <stdio.h>
int fib(int q);
int main()
{
    int n = 0, a = 0, sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n ; i++) {
        scanf("%d", &a);
        if(i % 2 == 0) {
            sum += a;
        }
        else {
            sum -= a;
        }
    }
    printf("%d", sum);
}


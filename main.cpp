#include <stdio.h>
int main()
{
    int a = 0, ans = 0;
    scanf("%d", &a);
    while ( a ) {
        if ( a % 2 == 1 ) {
            ans+=1;
        }
        a /= 2 ;
    }
    printf("%d", ans );
}


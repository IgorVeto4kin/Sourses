#include <stdio.h>
int main()
{
    char s[4002];
    scanf("%s", s);
    int i = 0;
    int st = 0;
    while ( s[i] != '\0' ) {
        if ( s[i] == '(' ) {
            st += 1 ;
        }
        else if ( s[i] == ')' && st > 0 ) {
            st -= 1;
        }
        else if ( s[i] == ')' && st <= 0 ) {
            st = 100;
            break;
        }
        i += 1;
    }
    if ( st == 0 ) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}


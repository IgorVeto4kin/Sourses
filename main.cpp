#include <stdio.h>
int main()
{
    int c1 = 0, m1 = 0, c2 = 0, m2 = 0;
    int c3 = 0, m3 = 0;
    scanf ("%d:%d\n%d:%d", &c1, &m1, &c2, &m2);
    m3 = ( m1 + m2 ) % 60 ;
    c3 = ( c1 + c2 + (m1+m2)/60 ) % 24 ;
    printf("%02d:%02d\n", c3, m3);

}





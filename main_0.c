#include <stdio.h>

/* Forward declaration to avoid implicit declaration error */
int _islower(int c);

void test_islower(int n)
{
    int r = _islower(n);
    printf("%d -> %d\n", n, r);
}

int main(void)
{
    test_islower('H');
    test_islower('o');
    test_islower(108);
    test_islower(-1);
    return (0);
}

#include <stdio.h>

/*
 *some comments here
 *
 */

int main(void)
{
    long int n = 612852475143;
    long int i = 2;

    while (i <= n) {
        if (n % i == 0) {
            n /= i;
            if (n == 1 || n == i) {
                printf("%ld\n", i);
                break;
            }
        } else {
            i++;
        }
    }

    return 0;
}

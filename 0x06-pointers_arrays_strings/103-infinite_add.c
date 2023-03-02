#include <stdio.h>

/*
 *Find the lengths of the input numbers
 *Check if the result can fit in the output buffer
 *Start adding from the rightmost digits
 *Reverse the result string in-place
 *Null-terminate the result string 
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1 = 0, len2 = 0, carry = 0, sum = 0;

    while (n1[len1] != '\0') {
        len1++;
    }
    while (n2[len2] != '\0') {
        len2++;
    }

    if (len1 + len2 + 1 > size_r) {
        return 0;
    }

    int i = len1 - 1, j = len2 - 1, k = 0;
    while (i >= 0 || j >= 0 || carry > 0) {
        int d1 = i >= 0 ? n1[i] - '0' : 0;
        int d2 = j >= 0 ? n2[j] - '0' : 0;
        sum = d1 + d2 + carry;
        carry = sum / 10;
        r[k++] = sum % 10 + '0';
        i--;
        j--;
    }

    for (i = 0, j = k - 1; i < j; i++, j--) {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
    }

    r[k] = '\0';

    return r;
}

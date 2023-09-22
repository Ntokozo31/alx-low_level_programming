#include "main.h"


char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int carry = 0;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = size_r - 1;

    while (i >= 0 || j >= 0) {
        int digit1 = (i >= 0) ? n1[i] - '0' : 0;
        int digit2 = (j >= 0) ? n2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;

        if (k < 0) {
            return 0;
        }

        carry = sum / 10;
        r[k] = (sum % 10) + '0';

        i--;
        j--;
        k--;
    }

    if (k < 0) {
        return 0;
    }

    if (carry > 0) {
        r[k] = carry + '0';
        k--;
    }

    if (k >= 0) {
        memmove(r, r + k + 1, size_r - k - 1);
    }

    return r;
}

int main() {
    char n1[] = "123";
    char n2[] = "456";
    char result[10];

    char *res = infinite_add(n1, n2, result, sizeof(result));
    if (res != 0) {
        printf("Result: %s\n", res);
    } else {
        printf("Unable to store the result in the buffer.\n");
    }

    return 0;
}

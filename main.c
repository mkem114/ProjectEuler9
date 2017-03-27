#include <stdio.h>

int isPythag(int a, int b, int c) {
    return (a*a + b*b == c*c);
}

int main() {
    int sum = 1000;
    for (int leading = 1; leading < sum; leading++) {
        for (int trailing = 1; trailing <= leading; trailing++) {
            int c = sum -leading-trailing;
            if (isPythag(leading, trailing, c)) {
                printf("%i", leading*trailing*c);
                return 0;
            }
        }
    }
    return 1;
}
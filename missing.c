#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        unsigned int s, a, b, c;
        scanf("%u %u %u %u", &s, &a, &b, &c);
        unsigned int d = s - a - b - c; // find the missing number
        printf("%u\n", d);
    }
    return 0;
}

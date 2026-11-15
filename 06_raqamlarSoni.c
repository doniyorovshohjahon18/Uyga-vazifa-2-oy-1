#include <stdio.h>

int raqamlarSoni(long long son) {
    if (son == 0) return 1;
    int count = 0;
    long long x = son < 0 ? -son : son;
    while (x > 0) {
        x /= 10;
        count++;
    }
    return count;
}

int main() {
    long long s;
    printf("Son kiriting: ");
    scanf("%lld", &s);
    printf("Raqamlar soni: %d\n", raqamlarSoni(s));
    return 0;
}

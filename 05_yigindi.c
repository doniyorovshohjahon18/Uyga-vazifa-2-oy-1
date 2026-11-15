#include <stdio.h>

long long yigindi(int n) {
    if (n <= 0) return 0;
    return (long long)n * (n + 1) / 2;
}

int main() {
    int n;
    printf("N ni kiriting: ");
    scanf("%d", &n);
    printf("Yig'indi: %lld\n", yigindi(n));
    return 0;
}

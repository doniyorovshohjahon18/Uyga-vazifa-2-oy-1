#include <stdio.h>

int kichikSon(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main() {
    int a, b, c;
    printf("1-sonni kiriting: ");
    scanf("%d", &a);
    printf("2-sonni kiriting: ");
    scanf("%d", &b);
    printf("3-sonni kiriting: ");
    scanf("%d", &c);
    printf("Eng kichik son: %d\n", kichikSon(a, b, c));
    return 0;
}

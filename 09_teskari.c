#include <stdio.h>

int teskari(int son) {
    int x = son < 0 ? -son : son;
    int natija = 0;
    while (x > 0) {
        natija = natija * 10 + (x % 10);
        x /= 10;
    }
    return son < 0 ? -natija : natija;
}

int main() {
    int s;
    printf("Son kiriting: ");
    scanf("%d", &s);
    printf("Teskari: %d\n", teskari(s));
    return 0;
}

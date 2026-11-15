#include <stdio.h>

int oxirgiRaqam(int son) {
    return (son < 0 ? -son : son) % 10;
}

int main() {
    int s;
    printf("Son kiriting: ");
    scanf("%d", &s);
    printf("Oxirgi raqam: %d\n", oxirgiRaqam(s));
    return 0;
}

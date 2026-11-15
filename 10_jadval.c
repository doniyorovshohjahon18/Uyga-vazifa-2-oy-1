#include <stdio.h>

void jadval(int son) {
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", son, i, son * i);
    }
}

int main() {
    int s;
    printf("Son kiriting: ");
    scanf("%d", &s);
    jadval(s);
    return 0;
}

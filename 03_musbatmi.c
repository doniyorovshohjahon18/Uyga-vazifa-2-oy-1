#include <stdio.h>

int musbatmi(int son) {
    return son > 0 ? 1 : 0;
}

int main() {
    int s;
    printf("Son kiriting: ");
    scanf("%d", &s);
    printf("Natija: %d\n", musbatmi(s));
    return 0;
}

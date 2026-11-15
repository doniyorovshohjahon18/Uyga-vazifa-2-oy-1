#include <stdio.h>
#include <math.h>

int boluvchilar(int son) {
    if (son <= 0) return 0;
    int count = 0;
    for (int i = 1; i * i <= son; i++) {
        if (son % i == 0) {
            count += 1;
            if (i != son / i)
                count += 1;
        }
    }
    return count;
}

int main() {
    int s;
    printf("Son kiriting: ");
    scanf("%d", &s);
    printf("Bo'luvchilar soni: %d\n", boluvchilar(s));
    return 0;
}

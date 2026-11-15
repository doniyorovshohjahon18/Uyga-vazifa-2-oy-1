#include <stdio.h>

double yuza(double uzunlik, double kenglik) {
    return uzunlik * kenglik;
}

int main() {
    double u, k;
    printf("Uzunlikni kiriting: ");
    scanf("%lf", &u);
    printf("Kenglikni kiriting: ");
    scanf("%lf", &k);
    printf("Yuza: %.2f\n", yuza(u, k));
    return 0;
}

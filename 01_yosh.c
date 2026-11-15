#include <stdio.h>
#include <time.h>

int yosh(int tugilgan_yil) {
    time_t now = time(NULL);
    struct tm *local = localtime(&now);
    int yil_hozir = local->tm_year + 1900;
    return yil_hozir - tugilgan_yil;
}

int main() {
    int yil;
    printf("Tug'ilgan yilingizni kiriting: ");
    scanf("%d", &yil);
    printf("Sizning yoshingiz: %d\n", yosh(yil));
    return 0;
}

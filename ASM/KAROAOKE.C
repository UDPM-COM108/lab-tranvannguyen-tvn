#include <stdio.h>

int main() {
    int x, y, sogio;
    double tong;

    do {
        printf("Nhap gio bat dau va gio ket thuc: ");
        scanf("%d %d", &x, &y);
    } while (x < 12 || y > 23 || x >= y);

    sogio = y - x;

    if (sogio <= 3) {
        tong = 150 * sogio;
    } else {
        tong = 150 * 3 + 150 * 0.7 * (sogio - 3);
    }

    if (x >= 14 && x <= 17) {
        tong *= 0.9;
    }

    printf("Tong gia tien karaoke: %.0f", tong);
    return 0;
}

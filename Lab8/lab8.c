#include <stdio.h>

struct nhanvien {
    char MANV[50];
    char Hoten[50];
    char SoNgayCong[50];
    char Luong[50];
};

int main() {
    int i, n;
    struct nhanvien mangnv[50];

    printf("Nhap so nhan vien: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nNhan vien thu %d\n", i + 1);

        printf("MANV: ");
        scanf("%s", mangnv[i].MANV);

        printf("Hoten: ");
        scanf("%s", mangnv[i].Hoten);

        printf("So ngay cong: ");
        scanf("%s", mangnv[i].SoNgayCong);

        printf("Luong: ");
        scanf("%s", mangnv[i].Luong);
    }

    printf("\n---- DANH SACH NHAN VIEN ----\n");
    for (i = 0; i < n; i++) {
        printf("mnv%s - hoten%s - songaycong%s - luong%s\n",
               mangnv[i].MANV,
               mangnv[i].Hoten,
               mangnv[i].SoNgayCong,
               mangnv[i].Luong);
    }

    return 0;
}

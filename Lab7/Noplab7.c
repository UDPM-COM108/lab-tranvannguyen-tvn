#include <stdio.h>
#include <string.h>
#include <ctype.h>

void bai1();
void bai2();
void bai3();

int main() {
    int choose;

    do {
        printf("\n===== MENU =====\n");
        printf("______________________________________\n");
        printf("|WELCOME TO TRANVANNGUYEN LAB7 COM108|\n");
        printf("______________________________________\n");
        printf("1. Dem nguyen am - phu am\n");
        printf("2. Dang nhap\n");
        printf("3. Sap xep 5 chuoi\n");
        printf("0. Thoat\n");
        printf("Moi nhap lua chon: ");
        scanf("%d", &choose);
        fflush(stdin);

        switch (choose) {
            case 1: bai1(); break;
            case 2: bai2(); break;
            case 3: bai3(); break;
            case 0: printf("Thoat chuong trinh.\n"); break;
            default: printf("Lua chon khong hop le!\n");
        }
    } while (choose != 0);

    return 0;
}

void bai1() {
    char s[100];
    printf("\n--- BAI 1: Dem nguyen am - phu am ---\n");
    fflush(stdin);
    printf("Nhap chuoi: ");
    gets(s);

    int i = 0, n = 0, p = 0;

    while (s[i] != '\0') {
        char c = tolower(s[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            n++;
        else if (c >= 'a' && c <= 'z')
            p++;
        i++;
    }

    printf("Chuoi '%s' co: %d nguyen am va %d phu am\n", s, n, p);
}

void bai2() {
    char userSys[]="admin";
    int passSys = 12345;

    char user[100];
    int pass;

    printf("\n--- BAI 2: Dang nhap ---\n");

    printf("Nhap username: ");
    fflush(stdin);
    scanf("%s", user);

    printf("Nhap password: ");
    scanf("%d", &pass);

    if (strcmp(user, userSys) == 0 && pass == passSys)
        printf("Dang nhap thanh cong!\n");
    else
        printf("Dang nhap that bai!\n");
}

void bai3() {
    char s[5][20];
    int i, j;

    printf("\n--- BAI 3: Sap xep 5 chuoi ---\n");
    fflush(stdin);

    // Nhap 5 chuoi
    for (i = 0; i < 5; i++) {
        printf("Nhap chuoi %d: ", i + 1);
        gets(s[i]);
    }

    // Sap xep bang bubble sort
    char temp[20];
    for (i = 0; i < 5 - 1; i++) {
        for (j = 0; j < 5 - i - 1; j++) {
            if (strcmp(s[j], s[j + 1]) > 0) {
                strcpy(temp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], temp);
            }
        }
    }

    printf("\nCac chuoi sau khi sap xep:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
}
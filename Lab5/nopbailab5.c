#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// ==== HAM HOAN VI ====
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void hoanvi() {
    int x, y;
    printf("Nhap x y: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("Sau khi hoan vi:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

int main(){
    int luachon;    

    do {
        printf("\n=========================================\n");
        printf("|Welcome to LAB4_PS49303_TRANVANNGUYEN_16|\n");
        printf("=========================================\n");
        printf("1. So sanh 3 so\n");
        printf("2. Kiem tra nam nhuan\n");
        printf("3. Hoan vi hai so\n");
        printf("0. Thoat chuong trinh\n");
        printf("=======================================\n");
        printf("Lua chon cua ban: ");

        // FIX LỚN: thêm khoảng trắng trước %d
        scanf(" %d", &luachon);

        switch(luachon){
            case 1: {
                int a, b, c, max, min;
                printf("Nhap 3 so a b c: ");
                scanf("%d %d %d", &a, &b, &c);

                max = min = a;
                if (b > max) max = b;
                if (b < min) min = b;
                if (c > max) max = c;
                if (c < min) min = c;

                printf("So lon nhat: %d\n", max);
                printf("So nho nhat: %d\n", min);
                break;
            }

            case 2: {
                int nam;
                printf("Nhap nam: ");
                scanf("%d", &nam);

                if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
                    printf("%d la nam nhuan\n", nam);
                else
                    printf("%d khong phai nam nhuan\n", nam);
                break;
            }

            case 3:
                hoanvi();
                break;

            case 0:
                printf("Cam on ban da su dung chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le.\n");
        }

    } while (luachon != 0);

    return 0;
}

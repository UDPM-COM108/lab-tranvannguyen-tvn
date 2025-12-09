#include <stdio.h>
#include <string.h>
struct nhanvien{
    char MANV[50];
    char Hoten[50];
    char SoNgayCong[50];
    float Luong;
} mangnv[50];
int main(){
    int i, n;
    printf("Nhap so nhan vien them: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
    printf("Nhap thong tin nhan vien thu %d:\n", i+1);
    printf("   MANV: ");
    scanf("%s", mangnv[i].MANV); 
    printf("   Hoten: ");
    gets(mangnv[i].Hoten);
    printf("   SoNgayCong: ");
    scanf("%s", mangnv[i].SoNgayCong);
    printf("   Luong: ");
    scanf("%f", &mangnv[i].Luong);
    
    }

    for(i=0;i<n;i++){
        scanf("%d", &i);
        printf("MANV: %s\n", mangnv[i].MANV);
        printf("Hoten: %s\n", mangnv[i].Hoten);
        printf("SoNgayCong: %s\n", mangnv[i].SoNgayCong);
        printf("Luong: %s\n", mangnv[i].Luong);
    }
    return 0;
}

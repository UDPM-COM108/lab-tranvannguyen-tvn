#include <stdio.h>
void tbtongchiahetcho3() {
    int n;
    printf("Nhap vao so phan tu:");
    scanf("%d", &n);
    int mang[n];
    // Nhập vào phần tử
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d:", i + 1);
        scanf("%d", &mang[i]);
    }
    float tong = 0;
    float biendem = 0; 
    for (int i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i];
            biendem++;
        }
    }
    if (biendem > 0) {
        printf("trung binh tong cac so chia het cho 3 trong mang la:%.2f\n", tong / biendem);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang.\n");
    }
}
void timmaxmintrongmang(){
    int n;
    printf("Nhap vao so phan tu:");
    scanf("%d",&n);
    int mang[n];
    for (int i = 0; i < n; i++){
        printf("Nhap vao phan tu thu %d:",i+1);
        scanf("%d",&mang[i]);
    }
    int tempmax=mang[0];
    for (int i = 0; i < n; i++){
        if (mang[i]>tempmax){
            tempmax=mang[i];
        }
    }
    int tempmin=mang[0];
    for (int i = 0; i < n; i++){
        if (mang[i]<tempmin){
            tempmin=mang[i];
        }
    }
    printf("max la:%d\n",tempmax);
    printf("min la:%d\n",tempmin);
}
void sapxepmanggiamdan() {
    int n;
    printf("Nhap vao so phan tu:");
    scanf("%d", &n);
    int mang[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d:", i + 1);
        scanf("%d", &mang[i]);
    }
    int temp;
    for (int i = 0; i < n-1 ; i++) { 
        for (int j = 0; j < n -1 - i; j++) { 
            if (mang[j] < mang[j + 1]) { 
                temp = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = temp;
            }
        }
    }

    printf("mang da sap xep giam dan la:");
    for (int i = 0; i < n; i++) {
        printf("%d,", mang[i]);
    }
    printf("\n");
}
void binhphuongptmang2c() {
    int n, m;
    int i,j;
    printf("nhap so hang:");
    scanf("%d", &n);
    printf("nhap so cot: ");
    scanf("%d", &m);
    int mang[n][m]; 
    printf("\nnhap ma tran (%dx%d) \n", n, m);
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            printf("nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }
    printf("\n ma tran binh phuong \n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < m; j++) {
            int binh_phuong = mang[i][j] * mang[i][j];
            printf("%5d ", binh_phuong); 
        }
        printf("\n"); 
    }
}
int main() {
    tbtongchiahetcho3();
    timmaxmintrongmang();
    sapxepmanggiamdan();
    binhphuongptmang2c();
    return 0;
}

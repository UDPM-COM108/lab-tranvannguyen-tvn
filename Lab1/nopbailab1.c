#include <stdio.h>// thư viện

int main(){
    int a,b;
    printf("Nhap a va b: ");
    scanf("%d%d",&a,&b);
    int tong = a + b;
    int hieu = a - b;
    printf("\ntong = %d", tong);
    printf("\nhieu = %d", hieu);
    return 0;
}
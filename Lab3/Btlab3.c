#include <stdio.h>
int main(){
    double dtb;
    printf("nhap diem trung binh: ");
    scanf("%lf", &dtb);
    if(dtb>=9)
        printf("Xuat sac");
    else if(dtb>=8)
        printf("Gioi");
    else if(dtb>=7)
        printf("Kha");
    else if(dtb>=5)
        printf("Trung binh");
    else if(dtb>=3)
        printf("Yeu");
    else 
        printf("Kem");
    return 0;

}




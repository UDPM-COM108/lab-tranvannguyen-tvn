#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int luachon;
    do{
        printf("\n__________________________________________");
        printf("\n|WELCOME TO TRANVANNGUYEN ASSIGNENT COM108|");
        printf("\n__________________________________________");
        printf("\n1. kiem tra so nguyen");
        printf("\n2. uoc so va boi so chung cua 2 so");
        printf("\n3. tinh tien cho quan karaoke");
        printf("\n4. tinh tien dien");
        printf("\n5. chuc nang doi tien");
        printf("\n6. tinh lai suat vay tra gop tu ngan hang");
        printf("\n7. vay tien mua xe");
        printf("\n8. sap xep thong tin sinh vien");
        printf("\n9. xay dung game POLY-LOTT");
        printf("\n10. tinh toan phan so");
        printf("\n---------------------------------------------");
        printf("\n0. Exit");
        printf("\nnhap vao 1-10 de su dung truong trinh : ");
        scanf("%d", &luachon);
        switch(luachon){
            case 1:{
                printf("\nnhap vao so nguyen: ");
                }break;
            case 2:{
                int x, y, nho = 0, ucln, bcnn;
                printf("\nNhap vao x va y: ");
                scanf("%d %d", &x, &y);
                    if (x >y){
                     nho = y;
                    }
                    else if(x<y){
                     nho = x;
                     }
                    else{
                     ucln = x;
                     }
                    for(int i=nho; i>=1; i--){
                        if (x%i==0 && y%i==0){
                             ucln = i;
                            break;
                             }
                            }
                     bcnn = (x*y)/ucln;
                printf("\nBoi chung nho nhat cua %d va %d la: %d", x, y, bcnn);
    
    
                 printf("\nUoc chung lon nhat cua %d va %d la: %d", x, y, ucln);
                }break;
            case 3:{
                int x, y, sogio;
                double giagio, tong;
                do{
                    printf("Nhap gio bat dau va gio ket thuc: ");
                    scanf("%d %d", &x, &y);
                }while(x<12||y<12||x>23||y>23||x>y);
                sogio = y - x;
                if(sogio<=3){
                    tong = 150 * sogio;
                }
                else if(sogio>3){
                    tong = 150 * 3;
                    tong += (150 * 0.7) * (sogio - 3);
                }
                if(x>=14 && x<=17){
                    tong = tong * 0.9;
                }
                printf("Tong gia tien karaooke:%d", (int)tong);
                }break;
            case 4:{
                int k, tien=0;
                printf("Nhap vao so dien(kwh): ");
                scanf("%d", &k);
                if (k<=50){
                    tien=k*1678;
                }
                else if (k<=100){
                    tien=50*1678;
                    tien+=(k-50)*1734;
                }
                else if (k<=200){
                    tien=50*1678;
                    tien+=50*1734;
                    tien+=(k-100)*2014;
                }
                else if (k<=300){
                    tien=50*1678;
                    tien+=50*1734;
                    tien+=100*2014;
                    tien+=(k-200)*2536;
                }
                else if (k<=400){
                    tien=50*1678;
                    tien+=50*1734;
                    tien+=100*2014;
                    tien+=200*2536;
                    tien+=(k-300)*2834;
                }
                else{
                    tien=50*1678;
                    tien+=50*1734;
                    tien+=100*2014;
                    tien+=200*2536;
                    tien+=300*2834;
                    tien+=(k-400)*2927;
                }
                printf("TIEN DIEN = %d VND");
                }break;
            case 5:{
                int money;
                int menhgia[]={500, 200, 100, 50, 20, 10, 5, 2, 1};
                int n =9;
                printf("Nhap so tien can doi: ");
                scanf("%d", &money);
                printf("Doi ra menh gia:\n");
                for(int i=0;i<n;i++){
                    if(money>=menhgia[i]){
                        int so_to = money/menhgia[i];
                        printf("%d to %d$\n", so_to, menhgia[i]);
                        money -= so_to*menhgia[i];
                }
                }
            }break;
            case 6:{
                printf("\nnhap vao so tien muon vay: ");
                }break;
            case 7:{
                printf("\nnhap vao so tien muon vay: ");
                }break;
            case 8:{
                int diem;
                printf("\nnhap vao diem (0-10): ");
                scanf("%d.2", &diem);
                     if (diem<0 || diem>10){
                        printf("\nDiem khong hop le, vui long nhap lai!");
                     }
                if (diem>9){
                    printf("Xiuat sac");
                }else if(diem>=8){
                        printf("Gioi");
                }else if(diem>=6.5){
                        printf("Kha");
                }else if(diem>=5){
                        printf("Trung binh");
                }else{
                        printf("Yeu");
                }
                     
                }break;
            case 9:{
                printf("\nbat dau tro choi POLY-LOTT: ");
                }break;
            case 10:{
                printf("\nnhap vao phan so can tinh toan: ");
                }break;
            case 0:{
                printf("\nchuc mung ban may man lan sau");
                }break;
            default:
                printf("ban da nhap sai vui long nhap lai");
        }
    }
    while(luachon!=0);
    return 0;
}
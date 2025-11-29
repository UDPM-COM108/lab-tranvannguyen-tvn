#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int luachon;
    do{
        printf("\n____________________________________________");
        printf("\n|WELCOME TO TRANVANNGUYEN ASSIGNENT COM108|");
        printf("\n*********************************************");
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
                printf("\nnhap vao 2 so nguyen: ");
                }break;
            case 3:{
                printf("\nnhap vao thoi gian hat karaoke: ");
                }break;
            case 4:{
                printf("\nnhap vao so dien tieu thu: ");
                }break;
            case 5:{
                printf("\nnhap vao so tien can doi: ");
                }break;
            case 6:{
                printf("\nnhap vao so tien muon vay: ");
                }break;
            case 7:{
                printf("\nnhap vao so tien muon vay: ");
                }break;
            case 8:{
                printf("\nnhap vao thong tin sinh vien: ");
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
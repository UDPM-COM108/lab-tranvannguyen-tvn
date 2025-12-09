#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int luachon;    
    do{
        printf("=========================================\n");
        printf("|Welcome to LAB4_PS49303_TRANVANNGUYEN_16.|\n");
        printf("=========================================\n");
        printf("Chuc nang so 1: tinh trung binh tong cac so chia het cho 2 tu min toi max.\n");
        printf("Chuc nang so 2: xay dung chuong trinh xac dinh so nguyen to.\n");
        printf("Chuc nang so 3: xay dung chuong trinh xac dinh so chinh phuong.\n");
        printf("=======================================\n");
        printf("Lua chon chuc nang cua ban (Nhap 0 de thoat): ");
        scanf("%d",&luachon);
        switch(luachon){
            case 1:{ 
                int min, max, sum=0, count=0;
                printf("Nhap so min: ");
                scanf("%d", &min);
                printf("Nhap so max: ");
                scanf("%d", &max);
                for(int i=min; i<=max; i++){
                    if(i%2==0){
                        sum+=i;
                        count++;
                    }
                }
                if(count==0){
                    printf("khong co so chia het cho 2 trong khoang nay.\n");
                }else{
                    printf("Trung binh tong cac so chia het cho 2 tu %d toi %d la: %.2f\n", min, max, (float)sum/count);
                }
                break;
            
                }
                
            case 2:{
                int n, flag;
                printf("nhap mot so nguyen duong: ");
                scanf("%d", &n);
                if(n<2){
                    printf("%d khong phai la so nguyen to.\n", n);
                }else{
                    flag=1;
                    for(int i=2; i<=sqrt(n); i++){
                        if(n%i==0){
                            flag=0;
                            break;
                        }
                    }
                    if(flag==1){
                        printf("%d la so nguyen to.\n", n);
                    }else{
                        printf("%d khong phai la so nguyen to.\n", n);
                    }

                }
                break;
                
                }
            case 3:{
                int m;
                printf("Nhap mot so nguyen duong: ");
                scanf("%d", &m);
                if(m<0){
                    printf("%d khong phai la so chinh phuong.\n", m);
                }else{
                    int sqrt_m = (int)sqrt(m);
                    if(sqrt_m * sqrt_m == m){
                        printf("%d la so chinh phuong.\n", m);
                    }else{
                        printf("%d khong phai la so chinh phuong.\n", m);
                    }
                }
                break;
            }
                
            case 0:{
                printf("Cam on ban da su dung chuong trinh. Hen gap lai lan sau!\n");
                }break;
            default:
                printf("Ban da nhap sai. Vui long nhap lai!\n");
        }
    }
    while(luachon!=0);
    return 0;
}

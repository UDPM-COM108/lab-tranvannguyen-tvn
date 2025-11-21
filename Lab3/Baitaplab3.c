#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int choice;
    do
    {
    printf("_______________________________\n");
    printf("|WELCOME TO TRANVANNGUYEN LAB3 COM108|\n");
    printf("1. Chuc nang tinh hoc luc\n");
    printf("2. Chuc nang giai phuong trinh bac nhat\n");
    printf("3. Chuc nang giai phuong trinh bac hai\n");
    printf("4. Chuc nang tinh tien dien\n");
    printf("===================================================\n");
    printf("Moi ban nhap luu chon chuong trinh: ");
   
    int luachon;

    scanf("%d", &luachon);
    switch(luachon){
        case 1: {
            //chuc nang tinh hoc luc
            double dtb;
    printf("diem trung binh: ");
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
            break;
        }

        case 2: {
            //giai phuong trinh bac nhat
           // bai2();
           float a, b;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem");
        else
            printf("Phuong trinh vo nghiem");
    } else {
        float x = -b / a;
        printf("Nghiem x = %f", x);
            break;
    }

        }

           
    
        case 3: {
            float a, b, c, x, delta;
            printf("\nPhương trình có dạng: ax2 + bx + c = 0"
                   "\nNhap a b c:");
            scanf("%f %f %f", &a, &b, &c);
            if (a == 0)
            {
                if (b == 0)
                {
                    if (c == 0)
                    {
                        printf("PTVSN.");
                    }
                    else
                    {
                        printf("PTVN.");
                    }
                }
                else
                {
                    x = (-c) / b;
                    printf("PT co nghiem x=-c/b=%.2f", x);
                }
            }
            else
            {
                delta = pow(b, 2) - 4 * a * c;
                printf("Delta = %.2f\n", delta);
                if (delta < 0)
                {
                    printf("PTVN");
                }
                else if (delta == 0)
                {
                    printf("Phương trình có nghiệm kép x = -b/(2*a)=%.2f",
                           (-b) / (2 * a));
                }
                else
                {
                    printf(" Phương trình có 2 nghiệm riêng biệt."
                           "\nX1=%.2f\nX2=%.2f",
                           ((-b + sqrtf(delta)) / (2 * a)), ((-b - sqrtf(delta)) / (2 * a)));
                }
            }
            break;
        }

    
        



        case 4:{
            float dtt;
            printf("\nNhập vào số điện tiêu thụ hàng tháng(kWh):");
            scanf("%f", &dtt);
            if (dtt <= 50)
            {
                printf("Bậc 1: %.4f", dtt * 1.678);
            }
            else if (dtt <= 100)
            {
                printf("Bậc 2: %.4f", dtt * 1.734);
            }
            else if (dtt <= 200)
            {
                printf("Bậc 3: %.4f", dtt * 2.014);
            }
            else if (dtt <= 300)
            {
                printf("Bậc 4: %.4f", dtt * 2.536);
            }
            else if (dtt <= 400)
            {
                printf("Bậc 5: %.4f", dtt * 2.834);
            }
            else
            {
                printf("Bậc 6: %.4f", dtt * 2.927);
            }
            break;
        }
        case 0:
        {
            printf("Bye bye!");
            exit(0);
        }
        default:
            printf("Chon sai roi bo oi!");
            break;
        }
    } while (choice != 0);
    return 0;
}


            
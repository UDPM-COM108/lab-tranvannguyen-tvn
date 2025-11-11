 #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
 Input: Nhập vào 2 số nguyên x và y
 Output: Hiển thị ra màn hình tổng, hiệu 2 số nguyên

 #include <stdio.h>// thư viện
 int main(){
     printf("Nhap x va y: ");
     scanf("%d%d",&x,&y);
     int tong = x + y;
     int hieu = x - y;
     printf("\ntong = %d", tong);
     printf("\nhieu = %d", hieu);
     return 0;

 #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
 Input: Nhập vào cdai và crong
 Output: Hiển thị ra màn hình chuvi và dientich của hình chữ nhật

 #include <stdio.h>// thư viện
 #include <math.h>
 int main(){
     int cdai, crong;
     printf("Nhap chieu dai va chieu rong hinh chu nhat: ");
     scanf("%d%d",&cdai,&crong);
     int chuvi = (cdai + crong) * 2;
     int dientich = cdai * crong;
    printf("\nchu vi hinh chu nhat = %dcm", chuvi);
    printf("\ndien tich hinh chu nhat = %d cm%c", dientich, 178);
     return 0;
 }

#BÀI 3: XÂY DỰNG TÍNH CHU VI HÌNH CHÒN
    Input: Nhập vào bán kính r
    Output: Hiển thị ra màn hình chu vi hình tròn
Input: Nhập vào nhiệt độ C
#include <stdio.h>
int main(){
    float c;
    printf("Nhap nhiet do C: ");
    scanf("%f",&c);
    float f = (9.0/5) * c + 32;
    printf("\nNhiet do F = %.2f", f);
    return 0;

#Bài 4:XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH
Input; Nhập vào từ bàn phím điểm môn Toán , Lý , Hóa

#include <stdio.h>
int main(){
    float toan, ly, hoa;
    printf("Nhap diem mon Toan, Ly, Hoa: ");
    scanf("%f%f%f",&toan,&ly,&hoa);
    float dtb = (toan + ly + hoa) / 3;
    printf("\nDiem trung binh = %.2f", dtb);
    return 0;
}
#Bài 5: TINH CHU VI DIEN TICH HINH TAM GIAC VUONG
Input: Nhập vào 2 cạnh góc vuông a và b
#include <stdio.h>
int main(){
    float a, b;
    printf("Nhap do dai 2 canh goc vuong a va b: ");
    scanf("%f%f",&a,&b);
    float chuvi = a + b + sqrt(a*a + b*b);
    float dientich = (a * b) / 2;
    printf("\nChu vi hinh tam giac vuong = %.2f", chuvi);
    printf("\nDien tich hinh tam giac vuong = %.2f", dientich);
    return 0;
    }


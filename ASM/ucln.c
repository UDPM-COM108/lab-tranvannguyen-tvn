#include <stdio.h>
int main(){
    int a, b, x, y, ucln, bcnn;
    printf("Nhap vao x va y: ");
    scanf("%d %d", &x, &y);
    a = x;
    b = y;
    while(b != 0 ){
        int r = a % b;
        a = b;
        b = r;
    }
    ucln = a;
    bcnn = ( x*y)/ucln;
    printf("\nucln cua %d va %d la : %d", x, y, ucln);
    printf("\nbcnn cua %d va %d la : %d", x, y, bcnn);
}
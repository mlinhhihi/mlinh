#include <stdio.h>

// Hàm tính diện tích hình vuông
void DienTichVuong(int a) {
    int S = a * a;
    printf("Diện tích hình vuông là: %d\n", S);
}

int main() {
    int a;
    printf("Nhập chiều dài cạnh a: ");
    scanf("%d", &a);
    DienTichVuong(a);
    return 0;
}
#include <stdio.h>

int Timnghiem() {
    int count = 0;
    for (int x1 = 4; x1 <= 20; x1++) {
        for (int x2 = 3; x2 <= 20; x2++) {
            for (int x3 = 6; x3 <= 20; x3++) {
                for (int x4 = 0; x4 <= 20; x4++) {
                    if (x1 + x2 + x3 + x4 == 20) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    int songhiem = Timnghiem();
    printf("So nghiem nguyen cua phuong trinh la: %d\n", songhiem);
    return 0;
}

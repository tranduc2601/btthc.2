#include <stdio.h> 
int main() {
    int n;
    printf("hay nhap mot so nguyen n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("so duoc nhap phai la so nguyen duong.\n");
        return 1;
    }
    printf("%d so nguyen to dau tien la: ", n);
    int count = 0;
    int number = 2;
    while (count < n) {
        int prime = 1;
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");
    return 0;
}


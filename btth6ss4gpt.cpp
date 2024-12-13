#include <stdio.h>

int main() {
    int n;

    // Nh?p s? nguyên duong n
    printf("Nh?p vào m?t s? nguyên duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui lòng nh?p m?t s? nguyên duong l?n hon 0.\n");
        return 1;
    }

    printf("%d s? nguyên t? d?u tiên là:\n", n);

    int count = 0; // Ð?m s? lu?ng s? nguyên t? dã tìm du?c
    int num = 2;  // B?t d?u t? s? 2 (s? nguyên t? d?u tiên)

    while (count < n) {
        int is_prime = 1; // Gi? s? s? hi?n t?i là s? nguyên t?

        // Ki?m tra num có ph?i là s? nguyên t?
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Không ph?i s? nguyên t?
                break;
            }
        }

        if (is_prime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}


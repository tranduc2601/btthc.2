#include <stdio.h>

int main() {
    int n;

    // Nh?p s? nguy�n duong n
    printf("Nh?p v�o m?t s? nguy�n duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui l�ng nh?p m?t s? nguy�n duong l?n hon 0.\n");
        return 1;
    }

    printf("%d s? nguy�n t? d?u ti�n l�:\n", n);

    int count = 0; // �?m s? lu?ng s? nguy�n t? d� t�m du?c
    int num = 2;  // B?t d?u t? s? 2 (s? nguy�n t? d?u ti�n)

    while (count < n) {
        int is_prime = 1; // Gi? s? s? hi?n t?i l� s? nguy�n t?

        // Ki?m tra num c� ph?i l� s? nguy�n t?
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Kh�ng ph?i s? nguy�n t?
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


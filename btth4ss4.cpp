#include <stdio.h>
int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d", &n);
	if (n<=0){
		printf ("vui long nhap 1 so nguyen duong");
	}
	printf("cacs uoc cua so %d la: ",n);
	for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
	return 0;
}

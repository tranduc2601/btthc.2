#include <stdio.h>
int main(){
	int n;
	printf("nhap mot so nguyen duong: ");
	scanf("%d",&n);
	if (n<=0){
		printf ("vui long nhap 1 so nguyen duong\n");
	}
	if (n < 2){
		printf("day khong phair la so nguyen to");
		return 0;
	}
	for (int i= 2; i< n-1; i++){
		if (n % i== 0 ) {
		printf("khong phai la so nguyen to");
		return 0;
		}
	}
	printf("day la so nguyen to");
	return 0;
}

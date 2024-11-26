#include <stdio.h>

int main(){
	int n;
	   printf("nhap vao so nguyen: ");
	   scanf("%d",&n);
	while(n > 0){
		printf("%d ",n%10);
		n /= 10;
		}
}

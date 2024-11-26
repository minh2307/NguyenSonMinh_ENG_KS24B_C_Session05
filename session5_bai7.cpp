#include <stdio.h>

int main(){
	int a,b;
	
	    printf("Nhap vao hai so nguyen duong > 0: ");
	    scanf("%d %d",&a,&b);
	while(b != 0){ //kiem tra khi gia tri a khac khong
		int x = b;
		b = a % b;
		a = x;
	}	
    	printf("UCLN = %d",a);
	
return 0;
}

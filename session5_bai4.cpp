#include <stdio.h>

int main(){
	int i,n,tich;
	    printf("nhap vao so nguyen tu 1 den 10: ");
	    scanf("%d",&i);
	for( i ; i < 11 ; i){
		for(n = 1 ; n <= 10 ; n++){
			tich = i * n;
			printf("%d*%d=%d\n",i,n,tich);
		}
		break;
	}
	


return 0;
}

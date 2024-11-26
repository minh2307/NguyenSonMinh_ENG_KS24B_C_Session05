#include <stdio.h>

int main(){
	int choice,sum;
	int i,n,f;
	do{
		printf("    CACULATOR\n");
		printf("1.nhap 3 so\n");
		printf("2.tong 3 so\n");
		printf("3.trung binh cong 3 so\n");
		printf("4.so nho nhat so\n");
		printf("5.so lon nhat\n");
		printf("6.thoat\n");
		printf("lua chon cua ban: ");
		scanf("%d",&choice);
	
		switch(choice){
			case 1:
				printf("nhap vao 3 so nguyen bat ky: ");
	            scanf("%d %d %d",&i,&n,&f);
			    break;
			case 2:
				printf("tong ba so la: %d",i+n+f);
			    break;
		    case 3:
				printf("trung binh cua 3 so la : %d",(i+n+f)/3);
			    break;
			case 4:
			    if(i < n && i < f){
				    printf("so nho nhat la: %d",i);
			    }
			    else if(n < i && n < f){
			    	printf("so nho nhat la: %d",n);
				}
				else{
					printf("so nhi nhat la: %d",f);
				}
			    break;
			case 5:
				if(i > n && i > f){
				    printf("so nho nhat la: %d",i);
			    }
			    else if(n > i && n > f){
			    	printf("so nho nhat la: %d",n);
				}
				else{
					printf("so nhi nhat la: %d",f);
				}
			    break;
			default:
		
			    break;
		}
	} 
	while(choice != 6);
	
	    
	
	
	
	
return 0;
}

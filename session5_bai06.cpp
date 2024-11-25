#include <stdio.h>

int main(){
	float i,n;
	    printf("nhap vao 2 so nguyen bat ky: ");
	    scanf("%f %f",&i,&n);
	int choice;
	while(1){
		printf("    CACULATOR\n");
		printf("1.Tong 2 so\n");
		printf("2.Hieu 2 so\n");
		printf("3.tich 2 so\n");
		printf("4.thuong 2 so\n");
		printf("5.thoat\n");
		printf("lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("%.2f+%.2f=%.2f\n",i,n,i+n);
			    break;
			case 2:
				printf("%.2f-%.2f=%.2f\n",i,n,i-n);
			    break;
		    case 3:
				printf("%.2f*%.2f=%.2f\n",i,n,i*n);
			    break;
			case 4:
				printf("%.2f/%.2f=%.2f\n",i,n,i/n);
			    break;
			default:
	        break;
		}
	if(choice == 5){
		break;
	}
	}
	
return 0;
}

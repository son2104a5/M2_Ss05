#include<stdio.h>
#include<math.h>
int main(){
	long a,b;
	printf("nhap doanh thu ban hang: ");
	scanf("%d",&a);
	if(a<100000000){
		b=a/100*5;
		printf("hoa hong thu duoc: %d",b);
	}else if(a>100000000&&a<=300000000){
		b=a/100*10;
		printf("hoa hong thu duoc: %d",b);
	}else if(a>300000000){
		b=a/100*20;
		printf("hoa hong thu duoc: %d",b);
	}
}

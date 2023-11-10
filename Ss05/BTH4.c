#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("nhap tong thu nhap nhan vien:");
	scanf("%d",&a);
	if(a<=5000000){
		b=a*5/100;
		c=a-b;
	}else if(a<=10000000&&a>5000000){
		b=a*10/100;
		c=a-b;
	}else if(a<=18000000&&a>10000000){
		b=a*15/100;
		c=a-b;
	}else if(a>18000000&&a<=320000000){
		b=a*20/100;
		c=a-b;
	}else if(a>32000000&&a<=52000000){
		b=a*25/100;
		c=a-b;
	}else if(a>52000000&&a<=80000000){
		b=a*30/100;
		c=a-b;
	}else if(a>80000000){
		b=a*35/100;
		c=a-b;
	}
	printf("tien luong thuc cua nhan vien la:%d",c);
}

#include<stdio.h>
#include<math.h>
int main(){
	int a,b=600,c=400,d=200,e=100,f;
	printf("so phut da goi: ");
	scanf("%d",&a);
	if(a<=50){
		f=(a*b)+25000;
		printf("cuoc dien thoai trong thang la: %d",f);
	}else if(a<=150&&a>50){
		f=(50*b)+((a-50)*c)+25000;
		printf("cuoc dien thoai trong thang la: %d",f);
	}else if(a<=200&&a>150){
		f=(50*b)+(150*c)+((a-150)*d)+25000;
		printf("cuoc dien thoai trong thang la: %d",f);
	}else if(a>200){
		f=(50*b)+(150*c)+(200*d)+((a-200)*e)+25000;
		printf("cuoc dien thoai trong thang la: %d",f);
	}
}

#include<stdio.h>
int main(){
	int a,b;
	printf("nhap ngay sinh cua ban:");
	scanf("%d",&a);
	printf("nhap thang sing cua ban:");
	scanf("%d",&b);
	if(a<=21&&b==3||a<=20&&b==4){
		printf("cung bach duong");
	}else if(a<=21&&b==4||a<=20&&b==5){
		printf("cung kim nguu");
	}else if(a<=21&&b==5||a<=20&&b==6){
		printf("cung song tu");
	}else if(a<=22&&b==6||a<=22&&b==7){
		printf("cung cu giai");
	}else if(a<=23&&b==7||a<=22&&b==8){
		printf("cung su tu");
	}else if(a<=23&&b==8||a<=22&&b==9){
		printf("cung xu nu");
	}else if(a<=23&&b==9||a<=23&&b==10){
		printf("cung thien binh");
	}else if(a<=24&&b==10||a<=22&&b==11){
		printf("cung bo cap");
	}else if(a<=23&&b==11||a<=21&&b==12){
		printf("cung nhan ma");
	}else if(a<=22&&b==12||a<=19&&b==1){
		printf("cung ma ket");
	}else if(a<=20&&b==1||a<=18&&b==2){
		printf("cung bao binh");
	}else if(a<=19&&b==2||a<=20&&b==3){
		printf("cung song ngu");	
	}
}

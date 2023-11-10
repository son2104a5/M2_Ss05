#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float x,y,x1,x2;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	switch(a){
		case 0:
			if(b==0){
				if(c==0){
					printf("x vo so nghiem");
				}else{
				    printf("x vo nghiem");
		}
			}else if(b=!0){
				if(c==0){
				   printf("x=0");
			}else{
				x=-c/b;
				printf("x=%1f",x);
			}
	default:
	if(b==0){
		if(c==0){
			printf("x=0");
		}else{
			x=sqrt(-c/a);
			printf("x=%1f",x);
		}
	}else{
		y=(b*b)-4*a*c;
		if(y<0){
			printf("x vo nghiem");
		}else if(y==0){
			x=-b/(2*a);
			printf("x=%1f",x);
		}else if(y>0){
			x1=(-b+sqrt(y))/(2*a);
			x2=(-b-sqrt(y))/(2*a);
			printf("x1=%1f\nx2=%1f",x1,x2);
		        }
	        }
        }
    }
}

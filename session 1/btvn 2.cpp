#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("nhap a =");
	scanf("%d",&a);

	printf("nhap b =");
	scanf("%d",&b);
	printf ("nhap c=");
	scanf("%d",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("PT vo so nghiem");
				
			}else{
				printf ("PT vo  nghiem");
			}
		}else{
			float x=-c/((float)b);
			printf("PT co nghiem :%f",x);			
		}
	}else{
		int d=b*b-4*a*c;
		if(d<0){
			printf("pt vo nghiem");
		}else{
			if(d==0){
				float x=-b/ ((float)2*a);
				printf ("pt co nghiem kep: %f",x);
			}else{
				float x1=(-b+sqrt(d))/(2*a);
				float x2=(-b-sqrt(d))/(2*a);
				printf("nghiem thu nhat :%f \n",x1);
				printf("nghiem thu 2 :%f \n",x2);
			}
			
		}
	}
}

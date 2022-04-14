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
	if(a+b>c && a+c>b && b+c>a){
		float P=a+b+c;
		float d= float (P)/2;
	 	float S= sqrt (d*(d-a)*(d-b)*(d-c));
		printf("chu vi tam giac la : %d\n",P);
		printf("Dien tich tam giac la : %d",S);
	}else{
		printf("khong phai 3 canh cua tam giac");
	}

}

#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap a :");
	scanf("%d",&a);
	printf("nhap b :");
	scanf("%d",&b);
	printf("nhap c :");
	scanf("%d",&c);
	int max =a;
	if(max<b){
		max =b;
	}
	if(max<c){
		max=c;
	}
	printf("so lon nhat la : %d",max);
}

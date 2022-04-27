#include <stdio.h>
int main(){
	int a,b;
	printf("NHap a=");
	scanf("%d",&a);
	printf("NHap b=");
	scanf("%d",&b);
	int c=a;
	int d=b;
	int UCLN,BCNN;
	if(a==0||b==0){
	UCLN= (a+b);
	}else{
	
		while(a!=b){
			if(a>b){
			a=a-b;
			}else{
			b=b-a;
			}
		}
		UCLN=a;
	}
	BCNN =(c*d)/UCLN;

	printf("uoc chung lon nhat la : %d \n",UCLN);
	printf("boi chung nho nhat la : %d \n",BCNN);
	

}

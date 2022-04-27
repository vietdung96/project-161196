#include <stdio.h>
#include "ex1.h"

int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	
	int arr[5] = {9,2,5,7,8};
	int snt = SNTMax(arr,5);
	printf("So can tim: %d \n",snt);
	int s=luyThua(a,b);
	printf("%d ^%d = %d \n",a,b,s);
	int ucln = timUCLN(arr,5);
	printf("UCLN: %d \n",ucln);
	int bcnn =timBCNN(arr,5);
	printf("BCNN : %d \n",bcnn);
}

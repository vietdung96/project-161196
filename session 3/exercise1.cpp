#include <stdio.h>
int main(){
	int n;
	printf("nhap n :");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i%2!=0){
		printf("so le nho hon n la : %d \n",i);
		}
	}
}

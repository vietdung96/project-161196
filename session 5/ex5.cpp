#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	int min;
	printf("Nhap mang:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){

		if(arr[i]>0){
			for(int j=0;j<i;j++){
			if(arr[j]<arr[i]){
				min=arr[j];
			}
		}
	}
	}
		printf("so duong nho nhat la : %d",min);
}
	
	

#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	int arr[n];
	printf("nhap mang:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int a=arr[0];
	int b=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>b){
			b=arr[i];
		}
		if(arr[i]<a){
			a=arr[i];
		}
	}
	printf("doan can tim[%d,%d]",a,b);
		
}

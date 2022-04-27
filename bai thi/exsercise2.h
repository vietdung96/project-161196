#include <stdio.h>
void nhapMang(int arr[],int n){
	printf("nhap mang  \n ");
	for(int i=0;i<n;i++){
		scanf("%d",& arr[i]);
	}
}
	
void reverse(int ary[],int n){
	for(int i=n-1;i>=0;i--){
	printf("mang in nguoc : %5d \n",ary[i]);
	}
}

#include <stdio.h>
int main(){
    int n;
    printf("nhap mang n=");
    scanf("%d",&n);
    int arr[n];
    int s=0;
    float c =0 ;
    	int d=0;
    for(int i=0; i<n; i++) {
	 scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
		if(arr[i]%2!=0){
				d++;
			s=s+ arr[i];
		c=(s/d);	
		}
		}
	}
	printf("trung binh cong so le o vi tri chan la :%f ",c);
}

#include <stdio.h>
int main(){
    int n;
    printf("nhap mang n =");
    scanf("%d",&n);
    int arr[n];
    int c;
    for(int i=0; i<n; i++) {
	 scanf("%d",&arr[i]);
	 c=arr[i];
	}
	 	int x;
		printf("nhap x :");
		scanf("%d",&x);
	 
	  	if(c==x){
	  		printf("x da co trong mang \n");
		  }else{
		  
	 	printf("x khong co trong mang");
		}
	}

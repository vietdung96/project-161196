#include <stdio.h>
int main(){
	int n;
	printf("NHap n=");
	scanf("%d",&n);
	int s=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
		printf(" uoc cua %d la : %d \n",n,i);
			 s+=i;
		}
	}

	printf("tong cac uoc la : %d \n",s);
}

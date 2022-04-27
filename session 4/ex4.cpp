#include <stdio.h>
int main(){
	int n;
	printf("NHap n=");
	scanf("%d",&n);
	int i;
	while(n>0){
		i=n%10;
		n/=10;
		
	}
		printf("so  dau tien la : %d", i);
}

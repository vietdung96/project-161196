#include <stdio.h>
int main(){
	int n;
	printf("NHap n=");
	scanf("%d",&n);
	int max=0;
	int i;
	while(n>0){
		i=n%10;
		n/=10;
		if(i>max){
			max=i;
		}
		
	}
		printf("so  lon nhat trong cac so: %d", max);
}

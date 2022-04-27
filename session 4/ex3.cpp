#include <stdio.h>
int main(){
	int n;
	printf("NHap n=");
	scanf("%d",&n);
	int i;
	int s=0;
	while(n!=0){
		i=n%10;
		s+=i;
		n/=10;
	}
	printf("tong cac so la : %d",s);
}

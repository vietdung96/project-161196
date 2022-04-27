#include <stdio.h>
int main(){
	int n;
	printf("nhap n :");
	scanf("%d",&n);
	int i=0;
	int max=0;
	while(i<n){
		if(i%2==0&&i%3==0){
			if(i>max){
				max=i;
			}
			}
			i++;
	}
	printf("so lon nhat nho hon n chia het cho 2 va 3 la : %d",max);
}

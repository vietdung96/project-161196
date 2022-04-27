#include <stdio.h>
int main(){
	int n;
	printf(" n =");
	scanf("%d,",&n);
	float s =0;
	if(n!=0){
		for(int i=1;i<=n;i++){
			s+= (float) 1/i;
		}
				printf("s= %f",s);
		}else{
			printf("error");
		}
}


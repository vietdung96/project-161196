#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("nhap mang n :");
	scanf("%d",&n);
	char arrs[n][50];
	printf("nhap mang chuoi :");
	for(int i=0;i<n;i++){
				bool f=false;
		scanf("%s",arrs[i]);
	
	for(int j=0;j<i;j++){
		if(strcmp(arrs[j],arrs[i])==0){
			f=true;
			break;
		}
		
	}
	if(f){
		printf("ten nay da ton tai vui long nhap lai \n");
		i--;
		}
	}
	for(int i=0;i<n;i++){
		printf("%s",arrs[i]);
	}
}

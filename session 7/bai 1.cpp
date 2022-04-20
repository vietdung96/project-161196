#include <stdio.h>
#include <string.h>
int main(){
	int n;
	printf("nhap mang n:");
	scanf("%d",&n);
	char arrs[n][50];
	printf("nhap mang chuoi \n");
	for(int i=0;i<n;i++){
		scanf("%s",arrs[i]);
	}
	for(int i=0;i<n;i++){
		char tmp[50];
		strcpy(tmp, arrs[i]);
		int j=i-1;
		for(;j>=0&&strcmp(tmp,arrs[j])<0;){
		if(strcmp(arrs[j],arrs[j+1])){
		
		strcpy(arrs[j+1],arrs[j]);
		j--;
		}
			}	
			strcpy(arrs[j+1],tmp);		
		}
		printf("thu tu sap xep la : \n");
		for(int i=0;i<n;i++){
			printf("%s \n ",arrs[i]);
		}
		
}

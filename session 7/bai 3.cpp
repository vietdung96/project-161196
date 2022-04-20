#include <stdio.h>
#include <string.h>
int main(){
	char s[50];
	printf("nhap chuoi:");
	scanf("%s",s);
	int count=0;
	for(int i=0;i<50;i++){
		if(s[i]=='a'|| s[i]=='e'|| s[i]=='o'||s[i]=='i'||s[i]=='u'){
			count++;
		}
	}
	printf("so lan nguyen am xuat hien la :%d ",count);
	
}

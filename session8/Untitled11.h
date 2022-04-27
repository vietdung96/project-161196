#include <stdio.h>
int luyThua(int a,int b){
	int max =1;
while(b--){

		max=max*a;	
		}
		return max;
	}
	
int timMax(int *p,int n){
	int max = p[0];
	for(int i=0;i<n;i++){
		if(max < p[i]){
			max =p[i];
		}
	}
	return max;
}
bool checkSNT(int n){
	if(n<2) return false;
	if(n<4) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) return false;
	}
	return true;
}
int sNTMax(int *p,int n){
	int m= timMax(p,n);
	for(int i=m+1; ;i++){
		if(checkSNT(i))
		return i;
	}
}
int UCLN(int a,int b){
	if(a>b){
		for(int i=a;i>=1;i--){
			if(a&i==0&&b%i==0){
				return i;
			}
		}
	}else{
	for(int i=b;i>=1;i--){
			if(a&i==0&&b%i==0){
				return i;	
	}

		}
	}
}

int UCLN_Mang(int arr[],int n){
	for(int i=1;i<n;i++){
		int x=UCLN(x,arr[i]);
		return x;
	}
}
int timBCNN(int *p,int n){
	int m=p[0]>0?p[0]:-p[0];
	for(int i=m;;i++){
		bool f=true ;
		for(int j=0;j<n;j++){
			if(i%p[j]!=0){
				f=false;
				break;
			}
		}
		if(f){
			return i;
		}
	}
}


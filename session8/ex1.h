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
int SNTMax(int *p,int n){
	int m = timMax(p,n);
	for(int i=m+1; ;i++){
		if(checkSNT(i))
			return i;
	}
}
int timUCLN(int *p,int n){
	int ucln = 1;
	int m = p[0]>0?p[0]:-p[0];
	for(int i=2;i<m;i++){
		bool f= true;
		for(int j=0;j<n;j++){
			if(p[j]%i!=0){
				f = false;
				break;
			}
		}
		if(f && i>ucln){
			ucln = i;
		}
	}
	return ucln;
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


#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("nhap mang n =");
    scanf("%d",&n);
    int arr[n];
    int c;
    
    for(int i=0; i<n; i++) {
	 scanf("%d",&arr[i]);
	}
	 	int x;
		printf("nhap x :");
		scanf("%d",&x);
		int max= abs(arr[0]-x);
	for(int i=0; i<n; i++) {
		for(int j=0;j<i;j++){
	
	if((abs)(arr[j]-x)>max){
		max=arr[j];

		}
			c=arr[i];
	}
	}	
		printf("vi tri xa x nhat la : %d \n",c);
}

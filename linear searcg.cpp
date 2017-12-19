#include<stdio.h>
int main(){
	int arr[5];
	int n=5;
	int m,loc=-1;
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	for(int i=0;i<n;i++){
	
	if(arr[i]==m){
		loc=i;
		break;
	}	
	
		}
	
	printf("%d \n",loc);
}

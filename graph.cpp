#include<stdio.h>
//created by karan bhatia
int main(){
	int s,v,e,sv,dv;
	printf("enter  vertices,edges");
	scanf("%d %d",&v,&e);
	int arr[50][50];
	int p[50][50];
	for(int i=1;i<=e;i++){
		scanf("%d %d",&sv,&dv);
		arr[sv][dv]=1;
		arr[dv][sv]=1;
	}
	for(int i=1;i<=v;i++){
	for(int j=1;j<=v;j++){
printf("%d \t",arr[i][j]);
}
printf("\n");}
for(int i=1;i<=v;i++){
	for(int j=1;j<=v;j++){
		p[i][j]=arr[i][j];
	}
}
for(int k=1;k<=1;k++){
	for(int i=1;i<=v;i++){
		for(int j=1;j<=v;j++){
			p[i][j]=p[i][j]||(p[i][k]&&p[k][j]);
			
		}
	}
}
	for(int i=1;i<=v;i++){
		for(int j=1;j<=v;j++){
if(p[i][j]==1)			p[j][i]=p[i][j];}}
printf("\n path matrix is /n:");
for(int i=1;i<=v;i++){
	for(int j=1;j<=v;j++){
		printf("%d \t",p[i][j]);
	}
printf("\n");}
}

#include<stdio.h>
int main(){
static int  arr[100][100];
int n,e,s,t;
scanf(" %d %d",&n , &e);
for(int i=1;i<=e;i++){
scanf("%d %d",&s,&t);
arr[s][t]=1;
//arr[t][s]=1; 
}

int top=-1;
int stack[100],status[100],dfs[100];
int k=0,w,start;
scanf("%d",&start);

	for(int i=1;i<=n;i++){
		status[i]=0;
	//	printf("%d",status[i]);
	}
	stack[++top]=start;
	status[start]=1;
	while(top!=-1){
		w=stack[top];
		top--;
		status[w]=2;
		dfs[k]=w;
		k++;
		for(int i=1;i<=n;i++){
			if(arr[w][i]!=0 && status[i]==0){
				
				stack[++top]=i;
			status[i]=1;
			}
			
		}		
	}
	for(int i=0;i<k;i++){
		printf("%d\n",dfs[i]);
	}
}

#include<stdio.h>
int arr[10];
int n=0;
int end;
void print(){
	for(int m=1;m<=n;m++){
		printf("%d",arr[m]);
	}
}
void hippy(int last){
	int par,ptr,temp;
	ptr=1;
	int flag=0;
	
	while(flag==0){
		par=ptr;
		if(2*ptr<=last && arr[2*par]>arr[ptr])
par=2*ptr;
if(2*ptr+1<last && arr[2*ptr+1]>arr[ptr])
par=2*ptr+1;
if(par==ptr)
flag=1;
else{

	temp=arr[par];
	arr[par]=arr[ptr];
	arr[ptr]=temp;
}
	}
}

void insert(){
	int z;
	scanf("%d",&z);
	if(n>=10){
		print();
return;
	}
	n=n+1;
arr[n]=z;
int ptr=n;
int parent=ptr/2;
while(parent>=1 && arr[ptr]>arr[parent]){
	int temp;
	temp=arr[ptr];
	arr[ptr]=arr[parent];
	arr[parent]=temp;
	ptr=parent;
	parent=parent/2;
}
end=n;
for(int i=end;i>=1;i--)
hippy(n);
}
int main(){
while(1){
	int c;
	scanf("%d",&c);
	switch(c){
		case 1:
			insert();
			break;
	
	case 2:
		print();
		break;
}	}
}

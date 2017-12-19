#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
	
}*front,*rear;

void insert(){
	struct node *t,*p;
	t=(struct node *)malloc(sizeof(struct node));
	scanf("%d",&t->data);
	t->next=NULL;
	if(front==NULL){
		front=t;
		rear=t;
	}
	else{
		p=front;
		while(p!=rear){
			p=p->next;
		}
		p->next=t;
		rear=t;
	}
}
void delet(){

	
	struct node *q;
	q=front;
	front=front->next;
	free(q);
}
void display(){
		if(front!=NULL){
	struct node *p;
			p=front;
		while(p!=rear){
		printf("%d\n",p->data);
			p=p->next;
		}
		printf("%d\n",p->data);
}
else{
	printf("underflow");
}}


int main()
{
	front=NULL;
	rear=NULL;
    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delet();
            break;
            case 3:
            display();
            break;
            case 4:
         return 0;
            default:
            printf("Wrong choice \n");
        } 
    } 
 
}

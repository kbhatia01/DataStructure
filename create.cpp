#include<stdio.h>
#include<malloc.h>
	struct node{
		int  data;
		struct node *next;
	}*start;
	
	
	void create(){
	struct node *t,*q;
	t=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&t->data);
	t->next=NULL;
	if(start==NULL)
	start=t;
	q=start;
	while(q->next!=NULL)
	q=q->next;
	q->next=t;
}

void insertbeg(){
	struct node *t;
	t=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&t->data);
	t->next=start;
	start=t;
    }

main()
{
	start=NULL;
create();
insertbeg();
printf("value entered");
    
	
}

#include<stdio.h>
#include<stdlib.h>
typedef struct Lnode{
	int data;
	struct Lnode *next;
}Lnode;
//初始化链栈
void initStack(Lnode *ln){
	ln=(Lnode *)malloc(sizeof(Lnode));
	ln->next=NULL;
}
//判断链栈是否为空
int StackEmpty(Lnode *ln){
	return (ln->next==NULL?1:0);
}
//进栈
void push(Lnode *ln,int x){
	Lnode *p;
	p=(Lnode *)malloc(sizeof(Lnode));
	if(p ==NULL){
		printf("ERROR");
		exit(0);
	}
	p->next=NULL;
	p->data=x;
	p->next=ln->next;
	ln->next=p;
}
//出栈
int pop(Lnode *ln,int *x){
	Lnode *p=ln->next;
	if(p ==NULL){
		return 0;
	}
	*x=p->data;
	ln->next=p->next;
	free(p);
	return 1;
}
void printStack(Lnode *ln){
	Lnode *p=ln->next;
	while(p!=NULL){
		printf("%d\n",p->data);
		p=p->next;
	}
}
void main(){
	Lnode ln;
	int x;
	initStack(&ln);
	push(&ln,2);
	push(&ln,3);
	push(&ln,4);
	push(&ln,5);
	pop(&ln,&x);
	printf("出栈元素为：%d\n",x);
	printStack(&ln);
}
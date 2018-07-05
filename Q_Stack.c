
#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
typedef struct SqStack{
    int data[maxsize];
    int top;
}SqStack;
//初始化顺序栈
void initSqStack(SqStack *st){
    st->top=-1;
}
//判断栈是否为空
int SqStackEmpty(SqStack *st){
    return (st->top==-1?1:0);
}
//进栈
int push(SqStack *st,int x){
    if(st->top==maxsize-1){
        return 0;
    }
    st->data[++st->top]=x;
    return 1;
}
//出栈
int pop(SqStack *st,int *x){
    if(st->top ==-1){
        return 0;
    }
    *x=st->data[st->top--];
    return 1;
}
//打印栈元素
void printStack(SqStack *st){
    while(st->top !=-1){
        printf("栈元素：%d\n",st->data[st->top--]);
    }
}
void main(){
    int x;
    SqStack st={{1,2,3,4},3};
    push(&st,5);
    pop(&st,&x);
    printf("出栈元素：%d\n",x);
    printStack(&st);
}
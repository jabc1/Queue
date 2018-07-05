
#include<stdio.h>
#include<stdlib.h>
#define maxsize 100
typedef struct SqStack{
    int data[maxsize];
    int top;
}SqStack;
//��ʼ��˳��ջ
void initSqStack(SqStack *st){
    st->top=-1;
}
//�ж�ջ�Ƿ�Ϊ��
int SqStackEmpty(SqStack *st){
    return (st->top==-1?1:0);
}
//��ջ
int push(SqStack *st,int x){
    if(st->top==maxsize-1){
        return 0;
    }
    st->data[++st->top]=x;
    return 1;
}
//��ջ
int pop(SqStack *st,int *x){
    if(st->top ==-1){
        return 0;
    }
    *x=st->data[st->top--];
    return 1;
}
//��ӡջԪ��
void printStack(SqStack *st){
    while(st->top !=-1){
        printf("ջԪ�أ�%d\n",st->data[st->top--]);
    }
}
void main(){
    int x;
    SqStack st={{1,2,3,4},3};
    push(&st,5);
    pop(&st,&x);
    printf("��ջԪ�أ�%d\n",x);
    printStack(&st);
}
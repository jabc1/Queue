#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"
struct Queue{
int *pBase;	
int front;	//��ͷ
int rear;	//��β 
int len; //���г��� 
}; 
void initQueue(struct Queue * q,int len);	//��ʼ������
bool inQueue(struct Queue * q);	//���
bool outQueue(struct Queue * q);	//����
bool isEmpty(struct Queue * q);	//�ж϶����Ƿ�Ϊ��
bool isFull(struct Queue * q);	//�ж϶����Ƿ�����
void printList(struct Queue * q);	//�������Ԫ�� 
void clearQueue(struct Queue * q);	//��ն���Ԫ��

int main(int argc, char *argv[])
{
struct Queue q;//�ͻῪ��һ�� struc Queue ���͵��ڴ��ַ 
initQueue(&q, 5);
while(inQueue(&q)){}
printList(&q);

outQueue(&q);
outQueue(&q);
while (inQueue(&q)){}
printList(&q);
clearQueue(&q);
while(inQueue(&q)){}
printList(&q);
return 0;
}
//��ʼ������
void initQueue(struct Queue *q,int len){
q->pBase = (int *)malloc(sizeof(int)*len);
q->len = len;
q->front = 0;
q->rear = 0;
}
//���	
bool inQueue(struct Queue *q){
if(isFull(q)){
return false;

}
printf("������Ҫ��ӵ�Ԫ�أ�");
scanf("%d",q->pBase+q->rear);
q->rear = (q->rear+1)%q->len;
return true;

}
//����
bool outQueue(struct Queue *q){
if(isEmpty(q)){
return false;
}
printf("����Ԫ��Ϊ��%d\n",*(q->pBase+q->front));
q->front = (q->front+1)%q->len;
return true;
}	
//�ж϶����Ƿ�Ϊ��
bool isEmpty(struct Queue * q){
if(q->front	== q->rear){
printf("�����ѿ�\n");
return true;
}
return false;

}
//�ж϶����Ƿ�����
bool isFull(struct Queue * q){
if((q->rear+1)%q->len == q->front){
printf("��������\n");
return true;
}
return false;
}
//�������Ԫ��
void printList(struct Queue * q){
int temp = q->front;
while((temp != q->rear) && !isEmpty(q)){
printf("%d\n",*(q->pBase+temp));
temp = (temp+1)%q->len;
}
}
//��ն���Ԫ��	 
void clearQueue(struct Queue * q){
while(!isEmpty(q)){
q->front = (q->front+1)%q->len; 
} 
}
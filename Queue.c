#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"
struct Queue{
int *pBase;	
int front;	//对头
int rear;	//对尾 
int len; //队列长度 
}; 
void initQueue(struct Queue * q,int len);	//初始化队列
bool inQueue(struct Queue * q);	//入队
bool outQueue(struct Queue * q);	//出队
bool isEmpty(struct Queue * q);	//判断队列是否为空
bool isFull(struct Queue * q);	//判断队列是否已满
void printList(struct Queue * q);	//输出队列元素 
void clearQueue(struct Queue * q);	//清空队列元素

int main(int argc, char *argv[])
{
struct Queue q;//就会开辟一个 struc Queue 类型的内存地址 
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
//初始化队列
void initQueue(struct Queue *q,int len){
q->pBase = (int *)malloc(sizeof(int)*len);
q->len = len;
q->front = 0;
q->rear = 0;
}
//入队	
bool inQueue(struct Queue *q){
if(isFull(q)){
return false;

}
printf("请输入要入队的元素：");
scanf("%d",q->pBase+q->rear);
q->rear = (q->rear+1)%q->len;
return true;

}
//出队
bool outQueue(struct Queue *q){
if(isEmpty(q)){
return false;
}
printf("出队元素为：%d\n",*(q->pBase+q->front));
q->front = (q->front+1)%q->len;
return true;
}	
//判断队列是否为空
bool isEmpty(struct Queue * q){
if(q->front	== q->rear){
printf("队列已空\n");
return true;
}
return false;

}
//判断队列是否已满
bool isFull(struct Queue * q){
if((q->rear+1)%q->len == q->front){
printf("队列已满\n");
return true;
}
return false;
}
//输出队列元素
void printList(struct Queue * q){
int temp = q->front;
while((temp != q->rear) && !isEmpty(q)){
printf("%d\n",*(q->pBase+temp));
temp = (temp+1)%q->len;
}
}
//清空队列元素	 
void clearQueue(struct Queue * q){
while(!isEmpty(q)){
q->front = (q->front+1)%q->len; 
} 
}
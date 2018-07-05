/* 顺序队列接口定义头文件*/
#define true 1
#define false 0


/* 队的最大长度 */
#define MAX_QUEUE_SIZE 100
/* 队列的数据类型 */
typedef int datatype;

/* 静态链的数据结构 */
typedef struct queue{
    datatype sp_queue_array[MAX_QUEUE_SIZE];
    /* 队头 */
    int front;
    /* 队尾 */
    int rear;
}sp_queue;


/* 静态顺序链的接口定义 */


/* 静态链的初始化 */
sp_queue queue_init();

/* 判断队列是否为空,若为空
 * 返回true
 * 否则返回false
*/
int queue_empty(sp_queue q);


/* 插入元素e为队q的队尾新元素 
 * 插入成功返回true
 * 队满返回false
*/
int queue_en(sp_queue *q, datatype e);


/* 队头元素出队
 * 用e返回出队元素,并返回true
 * 若队空返回false
*/
int queue_de(sp_queue *q, datatype *e);

/* 清空队 */
void queue_clear(sp_queue *q);


/* 获得队头元素
 * 队列非空,用e返回队头元素,并返回true
 * 否则返回false
*/
int get_front(sp_queue, datatype *e );


/* 获得队长 */
int queue_len(sp_queue q);

/* 遍历队 */
void queue_traverse(sp_queue q, void(*visit)(sp_queue q));


void visit(sp_queue s);
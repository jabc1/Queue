/* ˳����нӿڶ���ͷ�ļ�*/
#define true 1
#define false 0


/* �ӵ���󳤶� */
#define MAX_QUEUE_SIZE 100
/* ���е��������� */
typedef int datatype;

/* ��̬�������ݽṹ */
typedef struct queue{
    datatype sp_queue_array[MAX_QUEUE_SIZE];
    /* ��ͷ */
    int front;
    /* ��β */
    int rear;
}sp_queue;


/* ��̬˳�����Ľӿڶ��� */


/* ��̬���ĳ�ʼ�� */
sp_queue queue_init();

/* �ж϶����Ƿ�Ϊ��,��Ϊ��
 * ����true
 * ���򷵻�false
*/
int queue_empty(sp_queue q);


/* ����Ԫ��eΪ��q�Ķ�β��Ԫ�� 
 * ����ɹ�����true
 * ��������false
*/
int queue_en(sp_queue *q, datatype e);


/* ��ͷԪ�س���
 * ��e���س���Ԫ��,������true
 * ���ӿշ���false
*/
int queue_de(sp_queue *q, datatype *e);

/* ��ն� */
void queue_clear(sp_queue *q);


/* ��ö�ͷԪ��
 * ���зǿ�,��e���ض�ͷԪ��,������true
 * ���򷵻�false
*/
int get_front(sp_queue, datatype *e );


/* ��öӳ� */
int queue_len(sp_queue q);

/* ������ */
void queue_traverse(sp_queue q, void(*visit)(sp_queue q));


void visit(sp_queue s);
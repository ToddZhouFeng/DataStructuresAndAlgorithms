[TOC]

# 队列 Queue

数据元素：

数据关系：

基本操作：

队列是一种**先进先出 first in first out **的线性表（缩写为**FIFO**），它只允许在表的一端进行插入，在另一端进行删除。插入端称为**队尾 rear**，删除端称为**队头 front**。

```c++
//构造空队列
initQueue(&queue)
//销毁队列
destroyQueue(&queue)
//清空队列
clearQueue(&queue)
//判断是否为空队列
queueEmpty(queue)
//返回队列长度
queueLength(queue)
//返回队头元素
getHead(queue, &e)
//返回并删除队头元素
deQueue(&queue, &e)
//插入队尾元素
enQueue(&queue, e)
//从队头到队尾遍历队列
queueTraverse(queue, visit())
```



## 链队列

利用链表表示队列。为了表示队头和队尾，设定头指针 front 和尾指针 rear ，并为了方便操作，设置头结点。则当 rear = front 时，表示空栈。



## 循环队列

利用顺序存储结构表示队列。同样设定头指针 front 和尾指针 rear 来表示队头和队尾。初始化空栈时，front = rear = 0；当插入队尾元素时，rear +=1；当删除队头元素时，head +=1。为了防止头、尾指针越界，我们将顺序队列想象成一个“环”，称为循环队列。为了实现这种结构，我们可以借助求余的特点：0 < i%n < n-1，具体实现方法看程序。

当 front = rear 时，有可能是队列为空，或队列为满。为了区分这两种清空，有两种方法：

* 另设一个标志位以区别空或满
* 少用一个元素空间，并规定尾指针在头指针的前一位时为满，尾指针等于头指针时为空




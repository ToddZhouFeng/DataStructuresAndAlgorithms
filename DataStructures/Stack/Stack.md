[TOC]



# 栈 Stack

数据元素：与链表类似

数据关系：与链表类似

基本操作：

栈是一种仅能在表尾进行插入或删除操作的线性表，因此栈又称为**后进先出 last in first out**的线性表（简称为**LIFO**结构）。表尾称为**栈顶 Top**，表头称为**栈顶**。

```c++
//构造一个空栈
initStack(&stack)
//销毁一个栈
destroyStack(&stack)
//清空一个栈
clearStack(&stack)
//判断是否为空栈
stackEmpty(stack)
//返回栈的长度
stackLength(stack)
//返回栈顶元素
getTop(stack, &e)
//返回并删除栈顶元素
pop(&stack, &e)
//插入栈顶元素
push(&stack, e)
//从栈底到栈顶遍历栈
stackTraverse(S, visit())
```





## 顺序栈

利用一组地址连续的储存单元依次存放从栈底到栈顶的数据元素，通常用 top指针 表示栈顶元素在顺序栈中的位置，用 base指针 表示栈底。当 base = nullptr 时，表示栈不存在；当 top = base 时，表示栈为空。



## 链栈

利用链表表示栈，一般首结点为栈顶，为结点为栈底。





## 栈的应用

### 数制转换

### 括号匹配

### 行编辑程序

### 迷宫求解

### 递归




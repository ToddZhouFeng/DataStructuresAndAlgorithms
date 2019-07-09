[TOC]

# 二叉树 Binary Tree

数据元素：具有相同特征的数据元素的集合

数据关系：若数据元素为空，则二叉树为空二叉树；否则，二叉树满足
1. 存在惟一称为根的数据元素 root，
2. 除根元素外，其余元素可滑分为两个互不相交的集合
3. 在这两个集合中，只要集合不为空，就有且只有一个元素为 root，并且该集合也满足二叉树的数据关系
4. 这两个集合都是二叉树，其中一个称为 **左子树**，另一个称为**右子树**

基本操作：
```c++
//构造空二叉树
initBiTree( &T )
//销毁二叉树
destroyBiTree( &T )
//按照定义构造二叉树
createBiTree( &T, definition )
//清空二叉树
clearBiTree( &T )
//判断二叉树是否为空
biTreeEmpty( T )
//返回二叉树的深度
biTreeDepth( T )
//返回二叉树的根
root( T )
//返回结点e的值
value( T, e )
//为结点e赋值
assign( &T， &e, value)
//返回结点e的双亲
parent( T, e )
//返回结点e的左孩子
leftChild( T, e )
//返回结点e的右孩子
rightChild( T, e )
//返回结点e的左兄弟
leftSibling( T, e )
//返回结点e的右兄弟
rightSibling( T, e)
//插入左或右子树
insertChild( &T, &p, LR, c)
//删除左或右子树
deleteChild( &T, &p, LR)
//遍历二叉树，以下分别为先序，中序，后序，层序遍历
preOrderTraverse( T, visit() )
inOrderTraverse( T, visit() )
postOrderTraverse( T, visit() )
levelOrderTraverse( T, visit() )
```



## 特殊的二叉树

* 满二叉树：每一层的结点数都是最大结点数的二叉树
* 完全二叉树：除最后一层外，每一层的结点数都是最大结点数，并且最后一层的结点是从左到右无空排列时，称为完全二叉树（就是满二叉树去掉最后一层右边的结点）

![](https://img2018.cnblogs.com/blog/1311506/201809/1311506-20180914121949740-1126685097.png "特殊二叉树的示意图")



## 二叉树的基本性质

* 第 i 层至多有 2^( i-1 ) 个结点

  （容易证明）

* 深度为 k 的二叉树至多有 2^( k ) -1 个结点

  （等差数列）

* 若终端结点数为 m， 度为2的结点为 n，则 m = n+1

  （只有根结点时，m=1, n=0, 式子成立；之后每增加一个度为2的结点，必增加一个终端结点，故 m = n+1 ）

* 具有 n 个结点的完全二叉树的深度为⌊ log_2( n ) ⌋ +1

  （“⌊ n ⌋”表示n向下取整，“⌈ n ⌉”表示向上取整 。这条性质可通过性质2来证明）
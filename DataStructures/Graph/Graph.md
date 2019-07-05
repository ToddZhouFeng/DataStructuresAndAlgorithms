[TOC]



# 图 Graph

数据元素：**顶点 Vex** 

数据关系：对于两个顶点v, w，用<v, w>表示从v到w的一条**弧 Arc**。根据弧是否有方向分为**有向图 Digraph**和**无向图 Undiagragh**。对于有向图，v为**弧尾 Tail**或**初始点 Initial node**，w为**弧头 Head**或**终端点 Terminal node**。对于无向图，用 (v, w) 表示v, w之间的一条**边 Edge**

注：为了描述图的相关性质，定义如下术语：

* 子图：以原图中的部分顶点和边或弧构成的新的图
* 完全图 Completed graph：有n(n-1)/2条边的无向图，此时所有的顶点都相连。
* 有向完全图：有n(n-1)条弧的有向图，此时所有的顶点间都有两条弧。
* 稀疏图 Sparse gragh/稠密图Dense graph：有较少边或弧的图为稀疏图，反之为稠密图。根据需要定义“较少”（比如e<n log(n) ）
* 邻接点 Adjacent：在无向图中，若顶点v, w相连，则称其互为邻接点
* 度 Degree/入度InDegree/出度OutDegree：在无向图中，与顶点v相关联的边的数目，为v的度，记为TD(v)；在有向图中，以顶点v为头的弧的数目，为v的入度，记为ID(v)，以v为尾的弧的数目，为v的出度，记为OD(v)
* 路径 Path：一个顶点序列(v1, v2, v3, ... , vn)，表示从v1，依次从边或弧去到v2, v3, ...，最后到达vn。
* 回路、环 Cycle：第一个和最后一个顶点相同的路径
* 简单路径/简单回路：各顶点只出现一次的路径
* 连通图 Connected Graph：在无向图中，对于任意两个顶点v, w，都存在从v到w的路径
* 连通分量：无向图中的极大连通子图
* 强连通图：在有向图中，对于任意两个顶点v, w，都存在从v到w的路径
* 强连通分量：有向图中的极大强连通子图
* 生成树：一个极小连通子图，它包含图中所有n个顶点，但只有足以构成树的n-1条边
* 有向树：若一个有向图，只有一个顶点的入度为0，其余顶点的入度均为1，则为有向树
* 有向森林：由若干个有向树构成，并且包括所有顶点，以及足以构成有向树的弧

基本操作为：

```c++
//以顶点集vex和弧集arc构建图
createGraph(&graph, vex, arc);
//销毁图
destroyGraph(&graph);
//返回vex在图中的位置
locateVex(&graph, vex);
//获取vex的值
getVex(graph, vex);
//设置vex的值
putVex(&graph, vex, value);
//添加顶点vex
insertVex(&graph, vex);
//删除顶点vex
deleteVex(&graph, vex);
//添加弧
inseartArc(&graph, vex1, vex2, value);
//删除弧
deleteArc(&graph, vex1, vex2);
//深度优先遍历
DFSTraverse(&graph, Visit());
//广度优先遍历
BFSTraverse(&graph, Visit());
```




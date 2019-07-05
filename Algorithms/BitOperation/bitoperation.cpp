//这是位运算相关的一些算法
#include "bitoperatation.h"

//一个数组中，一个数字只出现一次，其他数字出现两次。找出这个数字
int bitFind(int[] arr){
  int tmp=arr[0], length=sizeof(arr)/sizeof(arr[0]);
  for(int i=1; i<length; i++){
    tmp=tmp^arr[i];//异或两次相同的数，对结果没影响
  }
  return tmp;
}

//m的n次方
int bitPow(int m, int n){
  int sum=1;
  int tmp=m;
  while(n!=0){
    if(n&1==1){//将n次相乘二进制拆分为1,2,4...
      sum*=temp;
    }
    temp*=temp;//对应上面的1,2,4...次相乘
    n=n>>1;
  }
  return sum;
}

//交换两个数
void bitSwitch(int &x, int&y){
  x=x^y;
  y=y^x;
  x=x^y;
  //用加减法也行
}

//判断一个数是否是2的幂次方
void bitJudge2(int n){
  return n&(n-1)==0;
}
